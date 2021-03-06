//chp16c 문자열 표준 함수와 기타 표준 함수

/*
gets()함수와 puts()함수
출력         입력
scanf:공백을 종료 문자로 인식한다. 
eof-end of file. 상수 -1 

strlen()
문자열 길이를 알려준다(문자열 끄 알리는 문자는 포함x)
바이트 단위

strcpy, strncpy string.h 추가해야함
두번재 인자값으로 받은 문자열을 첫번째 인자값의 주소에 저장한다.
strncpy의 3번째 값은 복사 크기를 의미

strcat strncat
두 번째로 인자를 첫번쨰 메모리 주소와 결합
strncat=세번째가 결합 크기

strcmp strncmp
문자열 비교. 
결과는 음수 - 양수. 
아스키를 비교

strchr strstr
strchr-문자를 찾음
strstr 문자열을 찾음
strchr(array1,'a')

strupr strlwr 
문자열을 대문자 / 소문자로 바꾼다

sscanf sprintf
sscanf는 메모리로부터 데이터를 입력. 
ssprintf은 메모리에 데이터를 출력. 

strtok()구분자를 기준으로 문자열을 분리
더이상 토큰이 없으면 NULL반환

데이터 변환 함수
atoi(const char* str) //자료형 atoi() atol() atof()
#include <stdlib.h>

toascii() tolower() touooer()
ctype.h을 사용
문자의 아스키, 소문자, 대문자
#include <ctype.h>

수학 라이브러리
math.h/stdlib.h 사용
ceil(x) x보다 큰 값. floor(x)x보다 작은 값 fabs()절대값 
rand() 난수 생성 패턴 하나/ srand() 난수 패턴 생성 여러 개. seed 지정해줘야함
#Include stdlib.h 

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    struct room
    {
        char num[10];
        char name[15];
        int eng;
        int kor;
    } s1;

    printf("학번을 입력하세요: ");
    scanf("%s", &s1.num);
    char *p1 = NULL;
    p1 = strstr(s1.num, "2010");
    if (p1 != NULL)
    {

        printf("이름을 입력하세요: ");
        scanf("%s", &s1.name);
        printf("영어 성적을 입력하세요: ");
        scanf("%d", &s1.eng);
        printf("국어 성적을 입력하세요: ");
        scanf("%d", &s1.kor);
        printf("%s", s1.num);
        printf("%s", s1.name);
        printf("%d\n", s1.eng);
        printf("%d\n", s1.kor);
    }

    return 0;
}