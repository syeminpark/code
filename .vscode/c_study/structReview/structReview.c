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
구조체 변수의 시작 주소와 구조체의 첫번째 멤버 변수의 주소가 같다.
struct student stu={1,2,3}
struct student *p=NULL:
p=&stu

구조체를 함수의 인자로 전달
struct point{
};
void function(struct point call);  // void function(struct point *call);
struct point p ={10,20}
function(p)   //function(&p)
printf(call.x,call.y) // (*call).x call->y

반환
struct point function()    // struct point *function()
{
    struct point call={10,20}
    return call         return &call
}
struct point p=function()   // struct point* p=function()  

*/
}