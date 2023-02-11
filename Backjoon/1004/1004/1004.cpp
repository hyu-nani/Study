#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, y1, x2, y2, T;
    scanf("%d\n", &T);
    for (int i = 0; i < T; i++)
    {
        int num;
        scanf("%d %d %d %d\n", &x1, &y1, &x2, &y2);
        scanf("%d\n", &num);
        int planetX, planetY, planetR, count = 0;
        for (int j = 0; j < num; j++)
        {
            scanf("%d %d %d\n", &planetX, &planetY, &planetR);
            float dis1 = sqrt(pow(abs(x1 - planetX), 2) + pow(abs(y1 - planetY), 2));
            float dis2 = sqrt(pow(abs(x2 - planetX), 2) + pow(abs(y2 - planetY), 2));

            // 항성계 원 안에 출발점과 도착점이 같이 있을 경우를 생각.
            if (dis1 < planetR && dis2 > planetR)
            {
                count += 1;
            }
            else if (dis1 > planetR && dis2 < planetR)
            {
                count += 1;
            }
        }
        printf("%d\n", count);
    }
}