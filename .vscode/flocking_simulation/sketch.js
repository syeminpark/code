//각각의 파티클(클래스)를 담을 배열
const flock=[];
let alignSlider, cohesionSlider, seperationSlider;

function setup() {
  createCanvas(640, 400);
  alignSlider=createSlider(0,5,1,0.1)
  cohesionSlider=createSlider(0,5,1,0.1)
  seperationSlider=createSlider(0,5,1,0.1)
  //100개를 만든다. 그리고 배열에 넣는다.
  for(let i=0;i<100;i++){
  flock.push(new Boid());
  }
}

function draw() {
  background(51);

  //각각의 배열에 해당되는 모든 요소들/인스턴스들의 함수들을 불러온다. 
  //boid.flock(flock)의 경우, 전체 배열을 보내준다. 
  for (let boid of flock){
    boid.edges()
    boid.flock(flock)
    boid.update()
    boid.show();
  }
 
}