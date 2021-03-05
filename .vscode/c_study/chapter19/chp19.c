//chp19 전처리기와 파일 분할 컴파일

/*
전처리기:컴파일 전
# - 전처리기 지시자

#ifndef-매크로 정의되지 않은 경우에 컴파일하는 기능 
#ifdef -매크로가 정의된 경우에 컴파일하는 기능
메크로-변수와 달리 추가적인 메모리 공간을 요구x
#undef 매크로 해제

매크로 함수 = 사실 단순히 치환하기만 한다
#define MUL(x,y) x*y
MUL(a,b)
자료형과 상관없다. 빠르다. 다만 그대로 치환하여 문제가 발생할 수도. 
#매크로 함수의 인자를 문자열로 바꿔주는 연산자이다. 
#define OUTPUT2(a) #a
printf("%s",OUTPUT2(1234));

##토큰 결합 연산자
-매크로 함수 안에서
토큰: 문법 분석의 단위
파서: 토큰을 분석하는 프로그램 (컴파일러에 포함)
파서-코드 해석위 해 코드를 숫자, 콤마, 연산자, 식별자 등의 토큰 단위로 분리하고 의미를 파악
#define OUTPUT(a,b,c)a ## b ## c
OUTPUT(a,=,5);

미리 정의된 매크로
__FILE__ 현재 소스 코드 이름 나타냄 %s
__LINE__ 행 위번호 %d
__DATE__ 컴파일 날짜 %s
__TIME__ 컴파일 시간 %s

조건부 컴파일
특정 조건에 만족할 때만 코드 컴파일
#if~ #elif~#else ~#endif문 
ifdef~지시자 뒤에 지정한 매크로 이름이 선언되어 있으면 컴파일  #endif
ifndef~ endif=이름이 선언되어있지 않으면 컴파일

파일분할 컴파일
외부 파일의 변수 참조= extern int a,b; extern void add(int num1,int num2)// 함수의 경우에는 extern키워드를 빼도 된다.
static으로 선언하면 외부에서 extern 키워드로 접근 못함

*/
#include <stdio.h>
#include "myheader.h"

#define add(x, y) x + y

int main()
{

    printf("x+y=%d", add(5, 5));
    return 0;
}
