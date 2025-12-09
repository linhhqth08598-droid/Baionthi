#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define WIDTH 60
#define HEIGHT 15
#define GROUND 12

// Bi?n toàn c?c
int dinoY = GROUND;
int isJumping = 0;
int jumpSpeed = 0;
int cactusX = WIDTH - 10;
int score = 0;
int gameRunning = 1;
int highScore = 0;

// ?n con tr? console
void hideCursor() {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

// Di chuy?n con tr? d?n v? trí x,y
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// V? kh?ng long
void drawDino() {
    gotoXY(5, dinoY - 2); printf("  ¦¦¦¦¦¦¦");
    gotoXY(5, dinoY - 1); printf("¦¦¦   ¦¦¦");
    gotoXY(5, dinoY);     printf("  ¦¦¦¦¦¦¦");
    gotoXY(5, dinoY + 1); printf("    ¦ ¦");
}

// V? cây xuong r?ng
void drawCactus() {
    gotoXY(cactusX, GROUND - 2); printf("¦");
    gotoXY(cactusX, GROUND - 1); printf("¦");
    gotoXY(cactusX, GROUND);     printf("¦");
    gotoXY(cactusX - 1, GROUND); printf("¦");
    gotoXY(cactusX + 1, GROUND); printf("¦");
}

// V? m?t d?t
void drawGround() {
    for (int i = 0; i < WIDTH; i++) {
        gotoXY(i, GROUND + 1);
        printf("_");
    }
}

// V? giao di?n game
void drawGame() {
    system("cls");
    
    // V? tiêu d?
    gotoXY(WIDTH/2 - 5, 1);
    printf("DINO GAME");
    
    // V? di?m s?
    gotoXY(WIDTH - 15, 1);
    printf("Score: %d", score);
    gotoXY(WIDTH - 15, 2);
    printf("High: %d", highScore);
    
    // V? các d?i tu?ng game
    drawDino();
    drawCactus();
    drawGround();
    
    // Hu?ng d?n
    gotoXY(2, HEIGHT - 1);
    printf("SPACE: Jump | ESC: Exit");
}

// X? lý nh?y
void jump() {
    if (isJumping) {
        dinoY -= jumpSpeed;
        jumpSpeed--;
        
        if (dinoY >= GROUND) {
            dinoY = GROUND;
            isJumping = 0;
            jumpSpeed = 0;
        }
    }
}

// Ki?m tra va ch?m
int checkCollision() {
    return (cactusX <= 8 && cactusX >= 4 && dinoY >= GROUND - 2);
}

// C?p nh?t game
void updateGame() {
    // Di chuy?n cây xuong r?ng
    cactusX--;
    if (cactusX <= 0) {
        cactusX = WIDTH - 5;
        score++;
    }
    
    // X? lý nh?y
    jump();
    
    // Ki?m tra va ch?m
    if (checkCollision()) {
        gameRunning = 0;
        if (score > highScore) {
            highScore = score;
        }
    }
}

// Màn hình k?t thúc
void gameOverScreen() {
    system("cls");
    gotoXY(WIDTH/2 - 5, HEIGHT/2 - 1);
    printf("GAME OVER!");
    gotoXY(WIDTH/2 - 8, HEIGHT/2);
    printf("Score: %d", score);
    gotoXY(WIDTH/2 - 10, HEIGHT/2 + 1);
    printf("High Score: %d", highScore);
    gotoXY(WIDTH/2 - 10, HEIGHT/2 + 3);
    printf("Press SPACE to play again");
    gotoXY(WIDTH/2 - 6, HEIGHT/2 + 4);
    printf("Press ESC to exit");
}

// Reset game
void resetGame() {
    dinoY = GROUND;
    isJumping = 0;
    jumpSpeed = 0;
    cactusX = WIDTH - 10;
    score = 0;
    gameRunning = 1;
}

// Hàm chính
int main() {
    hideCursor();
    
    while (1) {
        drawGame();
        
        // X? lý input
        if (_kbhit()) {
            char key = _getch();
            if (key == ' ' && !isJumping && dinoY == GROUND) {
                isJumping = 1;
                jumpSpeed = 3;
            }
            if (key == 27) { // ESC
                break;
            }
            if (!gameRunning && key == ' ') {
                resetGame();
            }
        }
        
        if (gameRunning) {
            updateGame();
            Sleep(50); // T?c d? game
        } else {
            gameOverScreen();
        }
    }
    
    return 0;
}
