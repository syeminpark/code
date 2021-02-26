// chp17  콘솔 입출력과 파일 입출력

/*
콘솔은 대형 컴퓨터 시스템과 연결되어 데이터를 입력, 처리하여 결과 출력 장치 
=키보드, 모니터(표준 입출력 장치)
파일 입출력: 파일에서 데이터 입력받고 파일에 데이터 출력

스트림
데이터 입력, 출력 다리(가상)
키보드-표준 입력(stdin) 스티림-입력 버퍼(프로그램)- 출렵 버퍼(프로그램)-표준 출력 스트림(stdout)-모니터
-생성: 프로그램 시작/소멸: 프로그램 종료

버퍼와 버퍼링
처리할 데이터를 임시로 저장하는 저장소
데이터 생성, 처리 속도의 차이를 메꿔줌 => 하나씩 처리 보다 여럿을 한번에 처리 (효율성)
입력/출력 버퍼 = 표준 입출력 함수들

콘솔 입출력
1. 콘솔 표준 입출력 함수
getchar/putchar gets/puts/ scanf/printf
getchar: 문자를 int형으로 반환
putchar: int형으로 문자의 코드 반환 / 문자 단위가 printf보다 효율적
EOF:입력의 끝을 시스템에게 알리기 위해. ctrl +z

2. 콘솔 비표준 입출력 함수
버퍼 사용x
#include conio.h
getch/getche/putch/kbhit(누른 경우 0이 아닌 수 반환)

파일 입출력
이때까지 프로그램 실행 중 데이터-메모리 보관(프로그램 종료 후 사라짐)
파일-프로그램이 디스크에 데이터를 기록하는 단위
텍스트 파일/ 바이너리 파일(이진 형식을 인코딩/영상 데이터 기반 입출력)

피일 입출력 과정
파일 스트림 생성(파일 포인터)-파일을 연다(fopen함수)-파일 입출력 수행(f~함수)-파일을 닫는다(fclose()함수 사용)
파일 포인터: FILE 구조체 포인터. FILE 구조체=파일 스트림의 실체

fopen: 파일 경로와 mode 인자. = 포인터 생성과 파일 염. 못열면 NULL 반환
fclose() 인자: 파일 스트림을 지정 실패:EOF반환 

표준 파일 입출력 함수 
-파일, 표준 입출력 모두 적용 가능(putcahr,gets,scanf 같은 애들은 파일x) 4가지 경우의 수

fgetc(FILE* stream) - EOF 반환. 파일 끝 도달 시 / fgetc(stdin)
fputc(int c,FILE* stream) 실패 EOF 반환 //fputc(int c,stdout)
fgets(char *s,int n, FILE*stream) 파일 끝 도달 시 NULL fgets(buffer,sizeof(buffer),stdin) 
fputs(const char *s,FILE*stream) 실패시 EOF fputs(const char *s,stdout) 
fscanf(FILE*stream, const char* format,)텍스트/바이너리 데이터 동시 입력. 파일 끝이나 에러 EOF  / fscanf*stdin, "%s",name)
fprintf(FILE* stream, const char* format) 텍스트/바이너리 데이터 동시 출력  / fprintf("stdout,"%s",name)
feof(FILE* stream) 도달 시-0이 아닌 값. 도달 못할시 0
fflush(FILE *stream) 버퍼 비움 실패시 EOF   scanf()함수 이후에 남는 \n 문자가 다음에 호출되는 fgets()함수의 데이터로 벋아들여짐. 버퍼 공유 문제. 문자, 문자열 입력 함수들이 개행 문자를 하나의 데이터로 가져온다. fflush(stdin)
---------BINARY-----------------
fread(void *buffer,size_t size, size_t count,FILE* stream) 바이너리는 따로 변환 과정 필요x 성공식 반복 횟수 반환. 실패 시 count보다 작은 값 반환
       buffer=파일로부터 입력 받을 데이터 저장하는 버퍼를 가리키는 포인터, size= 한번에 입력받을 데이터의 바이트, count=반복 횟수(size=block 개수)
fwwrite(const void* buffer, size_t size, size_t count, FILE*stream)성공식 반복 횟수 반환. 실패 시 count보다 작은 값 반환.  한꺼번에 많은 양 입출력시 빛을 발함. 
fseek()
ftell()



*/