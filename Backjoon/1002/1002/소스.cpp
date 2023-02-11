
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>
int T = 0;
int EX, EY, ER, JX, JY, JR;

int main(void)
{
    //time.
    scanf("%d\n", &T);
    //position read
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d %d %d\n", &EX, &EY, &ER, &JX, &JY, &JR);
        double dis = sqrt(pow(abs(EX - JX), 2) + pow(abs(EY - JY), 2));
        int dif = abs(ER - JR);
        int sum = abs(ER + JR);
        if (dis == 0 && ER == JR)
            printf("-1\n");
        else if (dis < dif)
            printf("0\n");
        else if (dis == dif)
            printf("1\n");
        else if (dis > dif && dis < sum)
            printf("2\n");
        else if (dis == sum)
            printf("1\n");
        else if (dis > sum)
            printf("0\n");
    }
}