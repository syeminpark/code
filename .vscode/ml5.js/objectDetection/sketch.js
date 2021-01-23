let img;
let detector
let newwidth=640/800
let newheight=480/600

function preload(){
 img=loadImage('puffin.jpg');
 detector=ml5.objectDetector('cocossd');
}

function gotDetections(error,results){
  if(error){
    console.error(error);
  }
  else{
    console.log(results);
    for(let i=0;i<results.length;i++){
      let object=results[i];
      stroke(0,255,0);
      strokeWeight(4)
      noFill()

      rect(object.x*newwidth,object.y*newheight,object.width*newwidth,object.height*newheight);
    }

  }
}
function setup() {
  createCanvas(640, 480);
  image(img,0,0,width,height);

  detector.detect(img,gotDetections);

}

