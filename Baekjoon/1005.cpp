#include <stdio.h>
#include <math.h>
#include <vector>
#include <cstring>

using namespace std;

int delay[1000] = { 0 };//각 건물당 걸리는 시간 
//규칙 : X를 지으면 Y를 지을 수 있다.
int XList[1000] = { 0 };
int YList[1000] = { 0 };

int main(void)
{
    int T, N, K;//테스트케이스, 건물 수, 규칙 수
    scanf("%d\n", &T);
    scanf("%d %d\n", &N, &K);
    if(N < 2 || N > 1000)//범위 검사
    {return 0;}
    if(K < 1 || K > 100000)
    {return 0;}

    int X, Y, W;//건설규칙 X Y , 건설해야할 번호 W
    scanf("%d", &delay[0]);
    for(int i = 1 ; i < N ; i++)// 건물당 시간값 입력 
    { scanf(" %d", &delay[i]); }
    scanf("\n");

    for(int i = 0 ; i < K ; i++)// 건물당 규칙 입력 
    {
        scanf("%d %d\n", &XList[i], &YList[i]);
    }
    scanf("%d\n", &W);//건설해야할 번호

    for(int i = 0; i < K ; i++)
    {

    }


}
