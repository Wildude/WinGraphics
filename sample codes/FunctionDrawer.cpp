#include <gfx/graphics.h>
#include <cmath>
int main(int argn, char** args){
    float xo = 4, x;
    float yo, y;
    int gd = DETECT, gm, color, angle = 0;
    initgraph(&gd, &gm, (char*)"C:\\TC\\BGI");
    float r = 100;
    float dx = 1;
    while(x < 640){
        x = xo + dx;
        yo = 480 - ((xo/5 * sin(0.03 * xo)) + 10);
        y = 480 - ((x/5 * sin (0.03 * x)) + 10);
        // line smoothner
        setcolor(BLUE);
        line(xo, yo, x, y);
        // integral drawer
        setcolor(GREEN);
        //line(xo, 470, xo, yo);
        //line(x, 470, x, y);
        rectangle(xo, 470, x, y);
        // x-integral drawer (messy)
        /*
        setcolor(YELLOW);
        line(5, yo, xo, yo);
        line(5, y, x, y);
        */
        // coordinate drawer
        setcolor(RED);
        line(-1, 470, 641, 470);
        line(5, -1, 5, 481);
        // delayer
        delay(50);
        xo += dx;
    }
    getch();
    closegraph();
}
// 4 turns
// ((pow(xo, 5)/5 - 25 * pow(xo, 4) + (3500/3) * pow(xo, 3) - 25000 * xo * xo + 240000 * xo) + 10);
// 3 turns
// 
// 2 turns
//
// 1 turn
// ((pow(xo, 2) - 10 * x) + 10)