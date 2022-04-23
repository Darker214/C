//计算高度
#include <stdio.h>
int main()
{
    int h = 10;
    float x, y, x0 = 2, y0 = 2, d1, d2, d3, d4;
    printf("please enter(x, y):");
    scanf("%f,%f", &x, &y);
    d1 = (x - x0) * (x - x0) + (y - y0) * (y - y0);
    d2 = (x - x0) * (x - x0) + (y + y0) * (y + y0);
    d3 = (x + x0) * (x + x0) + (y - y0) * (y - y0);
    d4 = (x + x0) * (x + x0) + (y + y0) * (y + y0);
    if (d1 > 1 && d2 > 1 && d3 > 1 && d4 > 1)
        h = 0;
    printf("height=%d", h);
    return 0;
}