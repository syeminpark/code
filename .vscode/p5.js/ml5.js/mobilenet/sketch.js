let mobilenet;
// let puffin
let webcam; 
let className; 
let probability;

function modeload(){
  console.log('Model is ready!!!');
  mobilenet.predict(gotResults);
}

function gotResults(error,results){
  if(error){
    console.error(error)
  }else{
    //console.log(results)
    className=results[0].label;;
    probability=results[0].confidence;;
   
    mobilenet.predict(gotResults);
  }
}
x
// function imageReady(){
//  image(puffin,0,0,width,height)
// }


function setup() {
  createCanvas(640, 500);
  // puffin=createImg('puffin.jpg',imageReady);
  webcam=createCapture(VIDEO);
  webcam.hide()
  background(0);
  mobilenet=ml5.imageClassifier('MobileNet',webcam, modeload);
}

function draw(){
  image(webcam,0,0);

  fill(0);
  textSize(64);
  text(className,10,height-100);
  text(probability,10,height-150);
}
