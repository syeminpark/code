//구조체와 공용체

/*

구조체는 사용자 정의 자료형이다. 하나 이상의 변수들을 그룹화=새로운 자료형
1. 구조체 이름 2.구조체 멤버 변수 3.구조체 변수

같은 자료형일 수도 있고 다른 자료형을 가질 수도 있다. 
strct point {
    int x;
    int y;
}p1,p2,p3;

구조체 변수
구조체 멤버 변수에 접근하게 해주는 변수
세미콜론 전에 선언해준다

메인 함수안에서 선언해준다면
struct point p1,p2,p3의 방법으로 해준다.
p1.a,p1.y

초기화 방법
struct point p1={10,20}
struct point p2={0,0}
구조체 변수 복사
p2=p1;

구조체 변수들셈과 같은 연산은 안되고 대입만 됨.
은 덧

중쳅 구조체
구조체 변수를 (다른)구조체의 멤버 변수로 사용

초기화시 
struct poimt p1={0,{1,2,3}};
중간 중괄호는 생략해도 되지만 시각적으로 구분짓기 위해서 표시

typedef:자료형 재정의 키워드
tyepdef int(기존 자료형) mytype(새 이름)
typedef struct score{

} SCORE; 동시에 선언

scruct score{
char no[10]
}
typedef struct score STUDENT; 따로 선언

구조체 변수로 배열을 사용할 수도 있다
struct score stu[3]={}


score.no="20101323"을 저장하면 에러 발생
배열 이름은 시작 주소인데 시작 주소에 문자열을 저장하면 에러가 발생
strcpy(stu.no,"20101323");

구조체 멤버 변수로 문자열 배열을 사용하면 선언과 동시에 초기화하지 않으면
strcpy함수를 사용해야함.


구조체와 포인터
1.멤버 변수로 포인터 사용
2.구초체 변수로 포인터 사용
3. 자기 참조 구조체와 외부 참조 구조체


1.멤버 변수로 포인터 사용
struct point{
    int* x;
}p1;
int num1=4;
p1.x=&num1;

.연산지기 *연산자보다 우선순위가 높다.
구조체 변수의 시작 주소와 구조체의 첫번째 멤버 변수의 주소가 같다


2.구초체 변수로 포인터 사용(구조체 포인터 변수)
struct student stu={"20101323","Park",160};
struct student *p=NULL:
p=&stu;
(*p).no
p->np, 

p를 먼저 처리하여 p가 가리키는 구조체 변수의 시작 주소를 저장하게 한다. 
-> 연산자는 포인터 변수만으로 구조체의 멤버 변수(4바이트)에 접근할 때 사용한다.

(*p).no == p-> no


3. 자기 참조 구조체와 외부 참조 구조체
자기=구조체 내에서 자신을 참조
외부=구조체 내에서 다른 구조체를 참조

struct student{
    char name[20];
    int age;
    (멤버 변수)int *x;
    (자기)struct student* p;
    (외부)struct score*p;
};

구조체의 크기
메모리 정렬. 4바이트 단위로 메모리 공간을 정려라는 컴파일러는 구조체를 4바이트 단위로 메모리 정렬한다. 
멤버 변수들의 크기의 합보다 크거나 같다. 
구조체 멤버 변수들 사이에 사용되지 않는 데이터 바이트를 삽입(패딩)

구조체와 함수
1. 구조체를 함수의 인자로 전달(값,주소에 의한 호출)
2. 구조체를 함수의 반환형으로 전달(값,주소 반환)

1.1 구조체형 변수
void function(struct point a)
struct point=자료형
a=구조체 변수명

1.2 구조체 포인터 변수
void function(struct point* a)
function(&p)

2.1
struct point function(){
    struct point p={10,20}
    return p
}
struct point=반환 형태(자료형 지정)
p=구조체 값 반환(구조체 변수명)


struct point *function(){
    static struct point p={10,20}
    return &p
}
struct point *p;
p=function();



공용체
그룹으로 묶여진 여러개의 멤버 변수들 중에 가장 큰 메모리 공간을 공유해서 사용
'union'

union date
{
    int i;
    char c;
    double d;
}
하나의 메모리값(가장 큰 것)이 변경되면 전체가 변경된다. 


열거형
'enum'
enum week{ONE,TWO=2,THREE,FOUR,FIVE}
0부터 자동적으로 설정된다. 
TWO=2의 경우 2가 되어 1씩 추가된다.
열거형 멤버들을 정수형 상수로 인식하여 프로그램 내에서 사용할 수 있다. 
변수가 갖는 값에 의미를 부여할 수 있어 프로그램의 가독성이 높아짐.

이상하게도 구조체 변수 안에 char의 값을 scanf으로 받지 못한다. 

*/
#include <stdio.h>

struct point
{
    int x;
    int y;
};

void func1(struct point a)
{
    printf("%d %d", a.x, a.y);
}
void func2(struct point *a)
{
    printf("%d %d", a->x, a->y);
}
int main()
{
    struct point p1 = {10, 10};
    struct point p2 = {20, 20};
    func1(p1);
    func2(&p2);

    return 0;
}
