//구조체 복습

/* 구조체 멤버 변수 선언과 초기화
따로 할시 
struct point p1;
p1.x, p1.y로 해야한다
p1={1,2} 와 같은 형식x

구조체 변수 간의 연산x 
하지만 p1.x+p2.y는 오케이


!! 
구조체 멤버 변수로 문자열 배열을 사용하는 경우, 구조체 변수를 선언하고 동시에 초기화히지 않으면 
strcpy()함수를 사용해야함.


구조체와 포인터

*/
#include <stdio.h>

struct student
{
    int number;
    char blood;
    double eyeSight;
    int weight;
};

int main()
{

    struct student p1[5];
    for (int i = 0; i < 5; i++)
    {
        printf("학번을 입력해주세요\n");
        scanf("%d", &p1[i].number);

        printf("혈액형을 입력해주세요: \n");
        scanf("%c", &p1[i].blood);

        printf("시력을 입력해주세요\n");
        scanf("%lf", &p1[i].eyeSight);

        printf("몸무게를 입력해주세요\n");
        scanf("%d", &p1[i].weight);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d번째: %d %c %lf %d\n", i, p1[i].number, p1[i].blood, p1[i].eyeSight, p1[i].weight);
    }
    return 0;
}