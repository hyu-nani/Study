#include<stdio.h>
#include<math.h>

int val[1000] = { 0 };
int rule[100][100] = { 0 };//val 값은 시간값

int main(void)
{
    int T, N, K;
    scanf("%d\n", &T);//테스트케이스
    scanf("%d %d\n", &N, &K);//건물 수, 규칙 수
    if(N < 2 || N > 1000)
    {return 0;}
    if(K < 1 || K > 100000)
    {return 0;}

    int X, Y, W;//건설순서 X Y , 건설해야할 번호 W
    scanf("%d", &val[0]);
    for(int i = 1 ; i < N ; i++)// 건물당 시간값 입력
    { 
        scanf(" %d", &val[i]); 
    }
    for(int i = 0 ; i < K ; i++)// 건물당 규칙 입력
    {
        scanf("%d %d\n", &X, &Y);
        rule[X][Y] = val[i]; 
    }
    scanf("%d\n", &W);//건설해야할 번호


}
