//chapter 4 콜백 함수

/*
 콜백 함수는 다른 코드의 인자로 넘겨주는 함수
 let timer=setInterval(cbFunc,300);
 timer 변수에는 setInterval의 ID가 담긴다. 반복을 중단하기 위해 필요

 map메서드
 첫번째 인자로 callback, 생략 가능한 두번째 인자로 콜백함수 내부에서 this로 인식할 대상을 특정
 callback:function(currentValue,index,array)
 제이쿼리 메서드
 1인자 index 2 인자 currentValue
 콜백 함수 내부에서의 this가 될 대상을 call/apply로 명시적으로 바인딩하기에 this에 다른 값이 담기는 것이다.

 어떤 함수의 인자에 !객체의 메서드!를 전달하더라도, 이는 결국 메서드가 아닌, 함수이다. 
 forEach(obj.logValues) for each의 콜백으로 객체의 메서드를 넣음
bind 메서드를 사용하여 이 문제점을 보완할 수 있다. 
setTimeout(obj1.func.bind(obj),1000);

동기적인 코드는 현재 실행중 코드 완료 후 실행 방식(CPU로 즉시 처리)
비동기: 완료 여부와 무관하게 넘어감. (시간에 보류:setTimeout, 개입: addEventListener)
       별도의 동의, 실행 대기, 보류

*붙은 함수는 Generator 함수이다. 반환: Iterator(next 메서드 보유)
next 메서드 호출-generator함수의 yield에서 함수의 실행이 멈춘다.
next 다시 호출하면 다음 yield에서 멈춘다. 
비동기 작업 끝나는 시점= next 메서드 호출 

현재는 promise, async, wait등의 다양한 표현들이 많아졌다.

*/