//chapter 6자료형

/* 변수가 저장하는 데이터 형식을 자료형이라 한다. 메모리 크기 = 범위
정수형과 실수형으로 나눌 수 있다. 
char형은 정수형으로 분류되지만 문자형 데이터를 표현한다. (아스키가 0-127)

sizeof 연산자를 통해 자료형에 할당되는 메모리 크기 확인
print("%d",sizeof(int));
int num1=3
print("%d",sizeof(num1))
자료형과 변수의 메모리 크기는 같다. 

char(1), short(2) int(4) float(4) long(4) double(8) long double(8)
char:-128-127

limits.h = 정수형 자료형의 데이터 표현 범위의 최솟값과 최대값을 자동으로 알려주는 시스템 라이브러리
float.h = 실수형 

char는 %u 서식 지정자를 사용한다. 부호가 없는 정수를 의미한다.

cpu가 가장 빠르게 처리하는 자료형이 int이다. 
cpu 연산 기본 단위가 최소 32비트. 

오버플로우의 반대 개념: 언더 플로우

고정 소수점 = 12.456 %f / %lf
부동소수점 = 1,2345ㄷ+001 10의 거듭제곱으로 나눠 표현한 방식. %e / %le

정밀도를 위해서라면 주로 double형을 선호한다. 

.15
소수점 이하 15자리까지 표현해달라는 뜻이다. double을 lf로 출력해도 6짜리까지만 되어서 %.15lf이라고 적여줘야한다. 

접미어
double형을 선호하기에 float 선언시 데이터 손실이 일어날 수 있다. 그럴때
float num10= 0.123456F; 
처럼 소문자 또는 대문자 f를 삽입하면 된다.

자동형변환/강제 형변환
자료형 변환 우선순위에 따라 컴팡일러가=자동형변환
정밀도가 작은 자료형이 큰 자료형으로 변환된다. 

대입 연산시 자동 형변환이 일어난다. 
char-int-long-float-double-long double의 순서이다.


괄호 연산자
이미 정의된 자료형을 강제적으로 다른 자료형으로 반환
(dobule)num1/num2

typedef()함수를 이용하여 자료형의 명을 바꿀 수 있다
typedef int mytpe;
mytype num1=3000;


*/

#include <stdio.h>
#include <math.h>
int main()

{
    const float PI = 3.14;
    float radius;
    double area;
    double cir;

    printf("input radius =");
    scanf("%f", &radius);

    area = PI * pow(radius, 2);
    cir = PI * 2 * radius;
    printf("area=%lf, circumference=%lf", area, cir);

    return 0;
}