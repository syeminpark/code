//chapter 2 실행 컨텍스트

/* 실행할 코드에 제공할 환경 정보들을 모은 객체
호이스팅(hoisting)어떤 실행 컨텍스트가 활성화되는 시점에 선언된 변수를 위로 
외부 환경 정보 구성, this값 설정

스택/큐
스택- 출입구가 하나뿐인 깊은 우물 같은 데이터 구조
a,b,c,d= d,c,b,a순서로 꺼냄
5개 한도 우물에 더욱 많은 데이터=오류(오버플로우)

큐=양쪽이 모두 열린 파이프
a,b,c,d=a,b,c,d

동일한 환경(실행 컨텍스트) 구성방법= 전역 공간,eval()함수, 함수 
전역 공간=자동 생성. 
처음 코드 실행-전역 컨텍스트가 콜 스택에 담긴다.  = 활성화
전역 실행 컨텍스트는 변수 객체 생성x 전역 객체 (window,node.js의 global 객체)내장 객체가 아닌 호스트 객체 

variable envvironment, lexical environment, thisbinding

variable
최조 실행 시의 스냅샷. 복사하여 lexical만들고 사용
environment record, outerenvironment reference으로 구성돼 있다. 

lexical!!
어휘적/사전적인 
1.-environment record
현재 컨텍스트와 관련된 코드의 식별자 정보들이 저장(순서대로 수집)
수집!= 실행. 위로 끌어올림(호이스팅)
매개변수명, 함수 선언, 변수명

변수는 선언부와 할당부로 나뉘는데 선언부만 끌어올린다.
함수 선언은 전체를 끌어올린다. 

함수 선언문과 함수 표현식
함수 선언문은 반드시 함수명, 함수 표현식은 없어도 된다. 
있으면 기명 함수 표현식, 익명 함수 표현식(DEFAULT)이라 부른다.,
var multiply= function(a,b);
호이스팅에서 var multiply만 가져간다. 즉 함수도 하나의 값. 
함수 표현식으로 가면 동일한 함수명을 가지더라도 영향을 미칠 수 있는 범위가 달라진다. 

스코프 체인
스코프-식별자에 대한 유효범위
전역 공간 제외하고 함수만 스코프를 만듬.

2. -outer environemnet reference
선언 당시 함수의 lexical environment을 참조. 
연결 리스트의 형태. 언젠가는 전역 컨텍스트의 lexical에 도달. 
여러 스코프에서 동일한 식별자를 선언한 경우에도 스코프 체인 상에서 가장 먼저 발견된 식별자에게만 접근 가능.

첫번째는 실행 컨텍스트의 이름, 둘째는 environmentRecord 객체
[global,{a,outer}]
[outer, inner]
var a=1;
var outer=function(){
    var inner=function(){
        console.log(a);
        var a=3;
    }
    inner();
    console.log(a);
}
outer();
console.log(a);

여기서 inner가 undefined을 출력하는 이유는 함수를 재정의하기 때문이다. 
이를 변수의 은닉화 라고 한다

실행 컨텍스트 활성화 당시 this가 지정되지 않은 경우, 전역 객체가 저장된다. 
*/
