//feature exttaction is learning about the pixels. 
//transfer learning retrain the model.

let mobilenet;
let predictor;
let webcam; 
let slider; 
let addButton;
let trainButton;
let saveButton
let value=0;

function modeload(){
  console.log('Model is ready!!!');
}

function webcamReady(){
  console.log('video is Ready')
}

function whileTraining(loss){
  if(loss=null){   
    console.log('Training Complete')
    predictor.predict(gotResults)
  }
  else{
  console.log(loss)
  }
}

function gotResults(error,result){
  if(error){
    console.error(error)
  }else{
    value=result;
    predictor.predict(gotResults);
  }
}

function setup() {
  createCanvas(640, 500);
  webcam=createCapture(VIDEO);
  webcam.hide()
  mobilenet=ml5.featureExtractor('MobileNet', modeload);
  predictor=mobilenet.regression(webcam,webcamReady);

  slider=createSlider(0,1,0.5,0.01);
  
  addButton=createButton('add example image');
  addButton.mousePressed(function(){
    predictor.addImage(slider.value())
  })
  
  
  trainButton=createButton('train');
  trainButton.mousePressed(function(){
    predictor.train(whileTraining);
  });

  saveButton=createButton('save');
  saveButton.mousePressed(function(){
    predictor.save();
  });
}

function draw(){
  background(0);
  image(webcam,0,0);
  rectMode(CENTER);
  fill(255,0,200);
  rect(value*width,height/2,50,50)
  fill(0); 
  textSize(64);
  text(value,10,height-100);

}
