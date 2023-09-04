#include <conio.h>
#include <dos.h>
#include <graphics.h>
#include <stdio.h>

void car();
void mountain();
void sun();
void cloud(int x, int y);

int i;

// Driver code
int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "");

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(25, 240, "Press any key to view the Moving Car...");
    getch();

    for (i = 0; i < 600; i++) {
        // Draw mountain and sun
        setcolor(YELLOW);
        mountain();
        sun();
        cloud(100 + i, 100);
        cloud(300 + i, 50);

        // Draw the car
        car();

        delay(10);

        // Clear the screen
        cleardevice();
    }

    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(25, 140, "IE 1 Activity  By ...");
    outtextxy(25, 200, "(TYCOB310) - Abhishek B. Wankhade");
    outtextxy(25, 220, "(TYCOB290) - Kunal Kherde");
    outtextxy(25, 240, "(TYCOB285) - Omkar Jadhav");

    getch();

   
    closegraph();

    return 0;
}

// mountain function definition
void mountain() {
    line(0, 199, 200, 100);
    arc(220, 157, 49, 118, 60);
    line(259, 112, 460, 300);
    line(353, 200, 600, 60);
    arc(625, 115, 49, 118, 60);
}

// sun function definition
void sun() {
    arc(356, 200, 33, 139, 40);
    line(327, 169, 300, 140);
    line(335, 165, 322, 148);
    line(345, 162, 327, 129);
    line(355, 160, 348, 137);
    line(365, 161, 367, 124);
    line(375, 164, 382, 137);
    line(381, 168, 410, 134);
    line(387, 172, 413, 157);
}

// car function definition
void car() {


        setcolor(YELLOW);
        // setfillstyle(SOLID_FILL, YELLOW);
    // Car body
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
 
        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
 
        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);
 
        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);
 
        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);
 
        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);
 
        
         
        // Lines for bonnet and body of car
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
 
        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
 
        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);
 
        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);
 
        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);
 
        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);
        
        // road
        line(0, 350, getmaxx(), 350);
}
void cloud(int x, int y) {
    setcolor(LIGHTBLUE);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    ellipse(x, y, 0, 360, 30, 20);
    floodfill(x, y, LIGHTBLUE);
    ellipse(x + 40, y, 0, 360, 30, 20);
    floodfill(x + 40, y, LIGHTBLUE);
    ellipse(x + 20, y + 10, 0, 360, 25, 15);
    floodfill(x + 20, y + 10, LIGHTBLUE);
}
