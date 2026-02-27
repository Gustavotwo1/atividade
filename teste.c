#include <stdio.h>

#define WIDTH 70
#define HEIGHT 50

char screen[HEIGHT][WIDTH];

void clearScreen() {
    for(int y = 0; y < HEIGHT; y++)
        for(int x = 0; x < WIDTH; x++)
            screen[y][x] = '.';
}

void plot(int x, int y) {
    if(x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT)
        screen[HEIGHT - 1 - y][x] = '#'; // inverter Y
}

void drawLine(int x0, int y0, int x1, int y1) {
    int dx = x1 - x0;
    int dy = y1 - y0;
    int steps = dx > dy ? dx : dy;

    for(int i = 0; i <= steps; i++) {
        int x = x0 + i * dx / steps;
        int y = y0 + i * dy / steps;
        plot(x, y);
    }
}

void printScreen() {
    for(int y = 0; y < HEIGHT; y++) {
        for(int x = 0; x < WIDTH; x++)
            printf("%c", screen[y][x]);
        printf("\n");
    }
}

int main() {
    clearScreen();

    // vértices do triângulo
    int x1 = 10, y1 = 5;
    int x2 = 30, y2 = 5;
    int x3 = 10, y3 = 13;
    int x4 = 30, y4 = 13;

    int x5 = 20, y5 = 7;
    int x6 = 40, y6 = 7;
    int x7 = 20, y7 = 15;
    int x8 = 40, y8 = 15;


    drawLine(x1,y1,x2,y2);
    drawLine(x1,y1,x3,y3);
    drawLine(x2,y2,x4,y4);
    drawLine(x3,y3,x4,y4);

    drawLine(x5,y5,x6,y6);
    drawLine(x5,y5,x7,y7);
    drawLine(x7,y7,x8,y8);
    drawLine(x6,y6,x8,y8);

    drawLine(x1,y1,x5,y5);
    drawLine(x2,y2,x6,y6);
    drawLine(x3,y3,x7,y7);
    drawLine(x4,y4,x8,y8);
 





    printScreen();
    return 0;
}