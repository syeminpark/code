// function setup() {
//   createCanvas(640, 360);
// }

// function draw() {
//   background(51);
//   stroke(255);
//   noFill();

//   drawCircle(width/2,height/2,300,300);
// }

// function drawCircle(x,y,d){
//   ellipse(x,y,d,d)
  
//   if(d>10){
//   drawCircle(x+d/2,y,d/2)
//   drawCircle(x-d/2,y,d/2)
//   }
// }


// function setup() {
//   createCanvas(640, 360);
  
// }

// function draw() {
//   background(51);
//   angle=map(mouseX,0,width,0,PI/4); //45도 
  
//   translate(width/2,height);
//   stroke(255);
//   branch(120,8);
//   noLoop()
// }

// function branch(len,generation){
//   strokeWeight(generation);
//   line(0,0,0,-len);

//   translate(0,-len);
//   len*=0.66;
 
  
//   if(len>2){

//   let n=floor(random(1,4));
//   for(let i=0;i<n;i++){
//     angle=random(-PI/4,PI/4)
//     generation--

//     push()
//     rotate(angle);
//     branch(len,generation);
//     pop()
//   }
//   }
// }
let tree =[]
let leaves =[]

function setup(){
  createCanvas(640,360);
  let b= new Branch(createVector(width/2,height),createVector(0, -1), 100);
  tree.push(b)

}

function draw(){
  background(255);
  for(let i=0;i<tree.length;i++){
    tree[i].update()
    tree[i].render()

    if(tree[i].timeToBranch()){
      if(tree.length<256){
        tree.push(tree[i].branch(30))
        tree.push(tree[i].branch(-25))
      }
      else{
        leaves.push(new Leaf(tree[i].end))
      }
    }
  }

  for(let i=0;i<leaves.length;i++){
    leaves[i].display();
    leaves[i].update();
  }
}

function Branch(start,vel,n){
  this.start=start.copy()
  this.end=start.copy()
  this.vel=vel.copy()
  this.timerstart=n;
  this.timer=n;

  this.growing=true;

  this.update= function(){
    if(this.growing){
      this.end.add(this.vel)

    }
  }

  this.render=function(){
    stroke(0)
    line(this.start.x,this.start.y,this.end.x,this.end.y)
  }

  this.timeToBranch=function(){
    this.timer--
    if(this.timer<0 && this.growing){
      this.growing=false;
      return true;
    }
    else{
      return false;
    }
    }

    this.branch = function(angle) { //30,25 RESPECTIVELY 
      // What is my current heading
      //heading= calculate the angle of ratation in degrees or radians
  

      let theta = vel.heading();
      // What is my current speed
      //calculates the magnitude(length)of the vector and returns as float. 
      let m = vel.mag();
      // Turn me
      theta += radians(angle);
      // Look, polar coordinates to cartesian!!
      //cartesian= X, Y값을 사용하는 좌표계
      //In mathematics, the polar coordinate system is a two-dimensional 
      //coordinate system in which each point on a plane is determined 
      //by a distance from a reference point and an angle from a reference direction.
      //cos=gets x value. sin gets y value. multiplies with current speed. 

      let newvel = createVector(m * cos(theta), m * sin(theta));
      // Return a new Branch
      //this end= this.start.add(this.vel) which is the end point of newvel
      return new Branch(this.end, newvel, this.timerstart * 0.66);
    }
  
  }

function Leaf(pos){

  this.pos=pos.copy()

  this.vel=createVector(0,0)
  this.acc=createVector(0,0.1)

  this.update=function(){
    this.pos.add(this.vel);
    this.vel.add(this.acc)
  }
  
  this.display=function(){
    noStroke()
    fill(50,100);
    ellipse(this.pos.x,this.pos.y,4,4)
  }
}