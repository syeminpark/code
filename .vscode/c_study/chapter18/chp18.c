//동적 메모리 할당과 가변 인자

/* 스택 영역, 데이터 영역=정적 메모리 (컴파일 떄 결정) 프로그램 실행 중 크기 변경 불가
힙 영역=동적 메모리

프로세스-실행 중 프로그램
코드(실행 코드,함수)/스택(지역변수,매개변수)/데이터(전역변수,정적 변수)/힙(동적 메모리)
주소의 영역 또한 다르다

힙 영역-포링터로 접근
배열=함수/프로그램 종료 시 영역 해제x
배열 요소에 의해 메모리 낭비, 부족 배열 선언 시 변수 사용x

필요한 시점에 필요한 크기만큼 메모리를 할당하여 할당받은 메모리의 시작 주소를 포인터로 저장
메모리 할당/해제 함수 

#include <stdlib.h>
malloc(size_t size) 성공: 할당 메모리 시작 주소(void형) 반환 / 실패: NULL반환  size_t = unsigned long, unsigned int    알아서 형변환해야함. 자료형이 결정x        int* p=(int *)malloc(4)  
calloc(size_t num, size_t size) 성공: 할당 메모리의 시작 주소 반환 / 실패: NULL /자동 초기화 기능 calloc(4,4)==malloc(16)  calloc(sizeof(int),sizeof(int)) 
realloc(void* p,size_t size) 성공: 재할당된 메모리의 시작 주소 반환/ 실패: NULL 동적 메모리의 영역에서 size만큼 재할당.  p=(int*)realloc(p,sizeof(int)*4);
free(void* p) 성공: 할당된 메모리 해제  free(p)  // p=NULL; 

가변인자
함수 인자 수 고정x 함수 호출
void add(int num,...);


*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j;

    printf("필요한 메모리 공간: ");
    scanf("%d", &i);
    printf("저장 데이터 유형(1)int, (2)char, 3(float): ");
    scanf("%d", &j);

    if (j == 1)
    {
        int *ip = (int *)calloc(i, sizeof(int));
        printf("메모리 시작 주소: %d \n", ip);
        printf("할당된 전체 메모리 공간: %d바이트\n", i * sizeof(int));
    }
    else if (j == 2)
    {
        char *cp = (char *)calloc(i, sizeof(char));
        printf("메모리 시작 주소: %d \n", cp);
        printf("할당된 전체 메모리 공간: %d바이트\n", i * sizeof(char));
    }
    else if (j == 3)
    {
        float *fp = (float *)calloc(i, sizeof(float));
        printf("메모리 시작 주소: %d \n", fp);
        printf("할당된 전체 메모리 공간: %d바이트\n", i * sizeof(float));
    }
    else
    {
        printf("잘못된 입력\n");
    }
}