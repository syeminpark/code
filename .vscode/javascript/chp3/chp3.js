//03 this

/*
this는 컨텍스트가 생성(함수)될 떄 결정 
전역 공간에서 this눈 전역 객체를 가리킨다. 전역 컨텍스트 생성 주체=전역 객체 브라우저-window, node js global
전역 변수를 선언-전역 객체의 프로퍼티로도 할당(변수+객체의 프로퍼티)
자바스크립트의 변수는 실은 특정 객체으 프로퍼티로 동작(근데 왜 undefined이 나오지?)
특정 객체- 실행 컨텍스트의 lexical environment
실행 컨텍스트는 변수를 수집하여 L E의 프로퍼티로 저장. 변수 호출-LE 조회(일치 여부)-값 반환
전역 변수로는 삭제x global.a로 선언할 시 삭제 가능 delete

메서드 vs 함수 = 독립성  (.)여부  앞에 객체 이름

var obj={
    method:function(x){console.log(x);}
}
obj['method'](2);

this에는 호출한 주제에 대한 정보가 담긴다(메서드의 경우 객체)
obj.inner.methodA()= obj.inner=this
함수로서의 호출=this에 대한 정보가 없다-전역 객체
내부 함수 this 우회 방법= let self=this. 

화살표 함수- this 바인딩 과정이 생략되어 상위 스코프의 this 활용 가능
let innerFunc =()=>{ }

함수 A 제어권을 다른 함수/메서드 넘겨주는 것=콜백 함수
A는 함수 B의 내부 로직으로 실행, this도 바뀜
기본적으로 this는 전역을 가리키지만 B가 따로 지정할 수 있다.

[1,2,3,4,5].forEach(function(x){ㄴ
    console.log(x);
})
for each문. 배열을 그대로 그냥 넣은 모습

생성자 함수
공통된 성질을 지니는 객체들 생성 용도의 함수
생성자-클래스. 클래스로 만든 객체를 인스턴스
자바 스크립트: 함수에 생성자로서의 역할 포함(new)
내부에서의 this는 곧 새로 만들 구체적인 인스턴스 자신이 된다. 
new 호출: __proto__ 프로퍼티(prototype 프로퍼티를 참조)를 가진 객체(인스턴스)-공통 속성 및 개성을 해당 객체(this)에 부여

-call 메서드. 임의의 객체를 this로 지정할 수 있다. 첫번째 인자-this =. 메서드의 호출 주체인 함수를 즉시 실행하도록 하는 명령
func.call({x:1},4,5,6);
obj.method.call({a:4},5,6);

-apply(call과 기능적으로 동일) 두번째 인자를 배열로 받는다
func.apply({x:1},[4,5,6]);

유사배열객체에 배열 메서드를 적용
키가 0 또는 양의 정수인 프로퍼티가 존재.
call 메서드로 원본인 유사배열객체의 얕은 복사를 수행, slice 메서드(배열 메서드) 복사본을 배열로 반환
함수 내부에 접근할 수 있는 arguments 객체도 유사배열 객체
문자열의 경우 length 프로퍼티가 읽기 전용= 원본 문자열에 변경을 가하는 메서드는 에러

유사배열객체, 순회 가능한 모든 종류의 데이터 타입=배열 전환 Array.from

생성자 내부에서 다른 생성자를 호출 시 call/apply 유용

최대값
var max=Math.max.apply(null,numbers)

펼치기 연산자 
const max=Math.max(...numbers);
펼침 연산자=배열을 복제

bind메서드
넘겨받은 this,인수들을 새로운 함수를 반환(뒤에 이어서 등록)
this 미리 적용, 부분 적용 함수 구현
var bindfunc1= func.bind({x:1});
bindfunc1(5,6,7,8);
bind 메서드로 새로 만든 함수-name 프로퍼티에 bind의 수동태 'bound'가 붙음. 추적 가능함
/

this 우회방법2
innerFunc()로 호출할 것을 
그냥 innerFunc.call(this)
setTimeout(this.logThis.bind(this),1000);
for each도 this를 인자로 받을 수 있다.


*/


