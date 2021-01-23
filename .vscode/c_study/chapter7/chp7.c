// 반복문이랑 무엇인가? 7장

/*
while(1) = 무한 반복문
0이 아닌 정수가 입력되어 계속 참인 상태인 것이다.

do ~ while문
조건식과 관계없이 반복할 내용을 먼저 수행
반복문이 참이면 내용을 또 실행 


#include <stdio.h>

int main(void)
{
    int num = 5;

    do
    {
        printf("%d", num);
        num++;
    } while (num < 10);

    printf("\n **while 문을 종료합니다. **\n");

    return 0;
}

*/
#include <stdio.h>

int main()
{
    int input = 0;
    int result = 0;
    int counter = 0;
    while (1)
    {
        printf("Input number: ");
        scanf("%d", &input);
        result += input;
        counter++;

        if (input == 0)
        {
            break;
        }
    }
    printf("the addition of all input numbers: %d, the number of inputs: %d\n", result, counter - 1);

    return 0;
}