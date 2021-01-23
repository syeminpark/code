// 함수

/*scanf("%d %d",&a &b); 여러 개의 인자값들을 넣어줄 수 있다.

함수의 원형/함수의 선연
int sum(int x,int y); 만 위에 작성해주고 전체 코드를 밑에 적어줘도 실행
함수의 가능 개수 파악. 보편화 

매개변수(parameter) aka 함수의 인자 = 지역변수.
지역이 다르면 이름이 겹쳐도 상관은 없지만 가독성이 떨어진다. 
함수가 종료되면 메모리 공간이 소멸된다
{}안에 선언된 변수는 지역변수(상대적)

전역변수는 초기화하지 않아도 0이 자동 설정된다. 
전역 변수의 남용은 공유 자원 낭비다. 

정적 변수 static
전역 변수와 공통점이 많다.
차이는 초기화가 한번만. 메모리가 소멸되지 않아 값이 계속 유지/증가
정적 지역 변수 = 중괄호가 있는 지역 내에서 선언되고 사용
정적 전역 변수= 중괄호 밖.  외부에서 참조하지 못함. 

외부 변수 extern
다른 파일의 변수를 사용
외부 젼수도 전역 변수에 속한다. 자원 낭비

레지스터 변수 register
cpu내부의 임시 기억 장소(레지스터)에 변수 저장.
처리 속도가 빠름
자리 없으면 램으로 자동 할당. 
-메모리 의 생성과 소멸이 빈버한 변수(반복문)
컴파일러들은 웬만하면 자동으로 할당시켜준다

코드 영역
프로세스 = 실해 중인 프로그램
메모리 공가을 코드, 스택, 데이터, 힙 영역으로 나눈다. 기억 분류(storage class)이라 한다.
코드 영역= 실행 코드, 함수 저장 
스택 영역= 매개변수, 지역 변수, 중괄호 내부의 변수들이 저장
데이터= 전역 변수, 정적 변수
힙= 동적으로 메모리를 할당한느 변수들이 저장.

변수란 메모리 공간이다. 

재귀 함수 recursive function
재귀 호출= 함수 내에서 자기 자신을 호출 
시간과 메모리 공간의 효율 저하 문제 보유

특정 조건이 참이 되면 함수의 무한 반복이 중지되게 해야한다.


*/

#include <stdio.h>
#include <math.h>

int recur(int x);

int main()
{
    int val1;
    printf("input your number: ");
    scanf("%d", &val1);
    printf("1부터 %d 까지의 합:%d", val1, recur(val1));
    return 0;
}
int recur(int x)
{
    if (x > 0)
    {

        x += recur(x - 1);
        return x;
    }
}