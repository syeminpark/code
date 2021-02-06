/*
사례 1.

int a = 0;
int *pointer = &a;
printf("%d %d", *pointer, pointer);
result : 0 6422296
pointer 와 *pointer의 값은 다르다.
pointer=a를 하기에
pointer의 값은 주소값이 된다. 


사례 2.
char c='A';
int num=10;
printf("%c %d",c+1,num+1);
result:B,11


사례 3.
*(ip+1)
ip라는 배열의 주소에서 +1(자료형의 크기만큼 주소값 이동)의 값을 알려주는 것이므로 array[1]과 동일


사례 4.
함수 포인터
-함수 이름도 시작 주소
함수의 주소를 저장하는 포인터=함수 포인터.  따라서 int (*pointer)(int,int)의 형식을 취함
p.360


사례 5.
int array[3] = {10, 20, 30};
printf("%d %d", *array[1], array[1]);
return 0;
}
=*array[i]은 에러가 뜬다. 

포인터 변수를 통한 1차원 배열 요소 접근 법 
int *p=array
주소 p+0   값 *(p+0)


사례 6.
2차원 배열에서는 *(array+i)==*&array[i]==array[i]는 주소를 표현
하나의 층위가 올라갔다. 상대적인 개녀인 것 같다. 
배열의 경우에도 이름이 시작주소. 안의 요소들이 있기에.
이차원에는 다른 차원이 또 안에 있기에 또 주소가 되는 것이다.
*(array[0][0])은 또다시 값을 표현


사례 7
일차원 포인터로 이차원 배열 저장 시 [][]안댐
이때 배열 포인터 변수르 사용하는 것이다. 
int(*p)[3] 
3=열길이


사례 8
*(p[0]+1); = 값.


사례 9. 포인터 배열
int* pointer [3];
-괄호가 생략
-여러개의 포인터를 저장할 때 유용


사례10. 문자열과 널 문자
char array[]={'A','B','C','D','\0'} =문자열 배열 
char array2[]={'A','B','C','D'}= 문자 배열 
종료 문자의 여부.
    const char *p = &a
    값을 바꾸지는 못하고 주소만.
     char* const p = &a
    값은 바꿀 수 있다. 주소는 바꾸지 못한다. 
    const char* const p=둘다 안됨.


사례 11. 주소에 의한 호출
func(&a)
int func(int *p){}
int func(int (*p)[4]){}


사례 12. 주소를 반환하는 함수
-지역변수를 반환하면 에러
int *input(){
    return &num1
}
int*p=input();
void *vx= 아무 자료형의 주소만 저장 가능
*/
