//연산자

/*
변수 앞에 &을 붙이면 메모리 주소를 알 수 있다. 
&a를 논리적 주소
12ff60(메모리 주소 예시)를 물리적 주소라 한다. 
메모리 주소는 컴퓨터마다 다를 수 있지만 논리적 주소를 알고 있기에 상관이 없다.

%나머지 연산자 

숫자 상수는 메모리 공간의 이름이 없다.


증감연산자를 
전위 ++a.
후위 a++로 나눌 수 있다. 

b=num2++    num=10, 
b=10(대입한 후에 증가해라)num2=11
b=++num2
b=11 num2=11

num1=10
printf("%d \n", num1++);
printf("%d \n", num1);
10
11

관계 연산자
0이 아니면 모두 참 (True,False의 문자형도 맞지만 실질적인 숫자로도 저장된다.)
result1=(num1>num2)
print("%d",result);
1

조건 여산자
(조건식(a>b)) ? 식1 : 식2 
참이면 식1 거짓이면 식2


비트 연산자
4개의 비트는 2**n 개의 걍우의 수 
1바이트는 6비트이다. 

16진수-0-9까지 사용이후 a-f까지 문자를 사용

2진수 10진수 변환 방법

0000 1011
2**0+2**1+2**3=11

10진수에서 9. 16진수에서 f를 넘으면 자릿수가 넘어간다. 8진수에서는 7
8진수는 2진수의 3비트 묶음, 16진수는 4비트 단위의 묶음

비트연산자 종류들
하드웨어 처리 용이. 메모리 공간 최적화
& 둘다 1일 떼 1을 반환
| 둘중 하나라도 1일때 1을 반환
^ XOR 두개의 비트가 같지 않을 경우 1을 반환. 
~ NOT 보수 연산. 비트를 반전시킨다. 1이면 0으로 그 다음에 결과를 구한다. 
<<왼쪽 3칸이동 시프트 연산자. 빈 공간은 0으로 채운다. 

num1=20 num2=16
num1=2**4 2**2   num2=2**4 
num1 & num2= 16 
num1 | num2= 20
num1 ^  num2= 4
num1 ~  num2= -21
num1 << 3=120


연산자 우선순위

순서가 같을시 (*,/)왼쪽에서 오른쪽 


이진법에서 10진법 전환 알고리즘!!!

#include <stdio.h>
#include <math.h>

int binary_to_decimal(long int n)
{
    int decimal = 0, i = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;

        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
        printf("remainder: %d ", remainder);
    }
    return decimal;
}

int main()
{
    long int n;
    printf("Enter a binary number : ");
    scanf("%ld", &n);
    printf("Decimal number: %d\n", binary_to_decimal(n));
    return 0;
}

*/