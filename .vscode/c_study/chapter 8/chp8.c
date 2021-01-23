//조건문

/*switch(){
    case:머시기
     break;
    case:머시기 
    break;
}
와 같은 형식이다. 

default=switch 문에서 정의한 case에 해당되는 조건 없을 시 실행.
분기의 경우의 수가 많아지면 간결하게 표현할 수 있어 유용하다. 
하지만 비교 연산자 못 쓴다. char형, int형 정수만 올 수 있다. 

continue는 switch문과 같이 쓸 수가 없다.
continue=break가 달리 아예 끝나는게 아니라 조건 비교의 위치로 넘어가 반복할 내용을(아래의 내용)을 건너뛴다. 

for(;;) = for문에 아무것도 있지 않은 상태다. 무한 루프에 빠지는 것이다.

*/

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d, ", i);
    }

    return 0;
}