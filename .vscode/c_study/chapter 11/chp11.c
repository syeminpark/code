//chapter 11 다차원 배열

/*
int array[][]  행열 개념이다.
int array[4][3]={1,2,3,4,5,6,7,8,9,10,11,12} 혹은 int array[4][3]={1,2},{3,4}등과 같은 방식으로도 초기화할 수 있음
for중첩문을 통해 2차원 배열의 요소들에 접근하면 용이하다.
2차원 배열에서 행의 길이는 설정하지 않아도 되지만 열의 길이는 필수적으로 설정해야함. 
%3d=Print an integer, taking minimum 3 spaces" 즉 정렬이 된다. 한자리 수가 출력되면 앞의 두 칸이 비어있는 띄어쓰기인것

2차원 배열의 물리적 메모리 구조는 1차원 배열의 형태다. 

주소
array, array + 1, &array[0][0],array[0],*(array+0),*array

메모리 공간의 주소 앞에 *을 붙여서 값을 참조
*&array[0][0]
*array[0]+0
**(array+0)+0

*연산자가 +연산자보다 우선순위가 높다. -+
*/
#include <stdio.h>
int main()
{
    int array[2][3] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%x, %d\n", *(array + i) + j, *(*(array + i) + j));
        }
    }
    return 0;
}