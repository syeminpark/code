// 포인터와 함수 그리고 void형 포인터

/*
주소에 의한 호출이 가능하다.
값에 의한 호출= 변수(메모리 공간에 저장된 값) 또는 값을 복사해서 함수 호출
주소에 의한 호출= 주소(메모리 공간의 주소)를 참조하여 함수 호출

func(&a);
func(int *i)

변수가 많고 함수의 인자 전달에 사용하는 매개변수가 많은 경우.
배열이나 구조체와 같은 데이터를 전달할 떄, 주소에 의한 호출=메모리 공간 절약 및 좋은 성능 제공

sizeofO(array)/sizeof(int)= 배열의 길이
func(array,sizeof(array)/sizeof(int))
func(int* p,int num)

*(p+i)==p[i]

2차원 배열
아래는 2차원 배열의 주소를 저장하는 배열 포인터 변수 p를 이용한 코드이다.

int array[2][4];
sizeof(array)/행의 int합(16)
sizeof(array)/열의 int합(98)

func(array,sizeof(array)/16,sizeof(array)/8)
void func(int *p[4], int num1, int num2)   괄호가 중요함

일반적인 포인터 변수는 1차원이다.
따라서
void funct(int *p)
로 값을 받아서
printf(p[0],p[1]) 처럼 1차원으로 출력할 수는 있어도
printf(p[0][0],p[0][1])처럼 2차원으로는 출력이 되지 앟는다. 

함수 내의 지역변수의 주소를 반환하면 에러가 뜬다. 소멸되기 떄문에.
따라서 함수 내에서는 정적 변수를 사용하면 된다. 함수 종료 이후애도 메모리가 존재한다.

함수 포인터= 함수의 주소를 저장하는 변수
주소값을 반환하려면 함수 포인터를 사용해야한다. 
int *input();

main 함수에 인자가 있을 수 있다.
int main(int argc, char* argv)

int argv 문자열의 수를 저장
char*argv[] 문자열의 첫 번째 주소를 저장

void형 포인터
자료형이 없는 포인터 변수

자료형에 제약을 받지 않고 아무 자료형의 주소라도 저장 가능
void* vx=NULL;
다양한 주소만 저장할 수 있는 변수다. 값을 저장학나 변경할 수가 없다. 
*vx=3는 에러
*(char  *)vx
*(double *)vx
와 같은 방식으로 강제 형변환을 해야한다. 

char *str = "ABCD";
void func(char *_str)
printf(_str)


*/

#include <stdio.h>

int main()
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p = array;

    *p = array[7];
    for (int i = 1; i < 8; i++)
    {
        p[i] = array[i] - 1;
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d", p[i]);
    }

    return 0;
}