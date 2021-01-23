
// quadtree.(sections of four) 
//sections tracks references to sub sections when paricles is inside. 
// check individual locaitons of each particle => n squard checks. 100paricles= 100*2= 10000 checks. 
//exponential=지수
//= check within a range(region) instead of checking all. 

//instead of n, n**2, we get the 0(log n)
//look up a bunch of particles for a given area=log n times 
//to check particle against every other paricle= n (log n) times 

let qtree;

function setup() {
  createCanvas(400, 400);

  let boundary=new Rectangle(200,200,200,200);
  qtree=new QuadTree(boundary,4);
  console.log(qtree);

  // for(let i=0;i<500;i++){
  //   let p= new Point(random(width),random(height))
  //   qt.insert(p)
  // }
  // background(0);
  // qt.show()
}

function draw() {
  if(mouseIsPressed){
    let p =new Point(mouseX,mouseY);
    qtree.insert(p)
  }
   background(0);
   qtree.show();
   stroke(0,255,0);
   rectMode(CENTER);
   let range= new Rectangle(250,250,107,75);
   rect(range.x,range.y,range.w*2,range.h*2)
   let points=qtree.query(range);

}
           

class Point{
  constructor(x,y){
    this.x=x;
    this.y=y;
  }

}

class Rectangle {
  constructor(x,y,w,h){
    this.x=x;
    this.y=y;
    this.w=w;
    this.h=h;

  }

  contains(point){
  return(
    point.x>= this.x - this.w &&
    point.x <= this.x + this.w && 
    point.y >= this.y - this.h &&
    point.y < this.y + this.h
    );
  }
  intersectes(range){

  return !(range.x-range.w>this.x+this.w||
    range.x+this.w<this.x-this.w ||
    range.y-range.h>this.y+this.h||
    range.y+this.h<this.y-this.h
    )
  }
}



class QuadTree{
  constructor(boundary,n){
    this.boundary=boundary;
    this.capacity=n;
    this.points=[];
    this.divided=false;

  }

  subdivide(){

    let x= this.boundary.x;
    let y=this.boundary.y;
    let w= this.boundary.w;
    let h=this.boundary.h;

    let ne=new Rectangle(x+ w/2, y- h/2, w/2, h/2);
    this.northeast=new QuadTree(ne,this.capacity);
    let nw=new Rectangle(x- w/2, y- h/2, w/2, h/2);
    this.northwest=new QuadTree(nw,this.capacity);
    let se=new Rectangle(x+ w/2, y+ h/2, w/2, h/2);
    this.southeast=new QuadTree(se,this.capacity);
    let sw=new Rectangle(x- w/2, y+ h/2, w/2, h/2);
    this.southwest=new QuadTree(sw,this.capacity);

    this.divided=true;
  }

  insert(point){

    if(!this.boundary.contains(point)){
      return false;
    }

    if(this.points.length<this.capacity){
      this.points.push(point);
    }
    else{dd
      if(!this.divided){
      this.subdivide();
      return true;
      }
      else if(this.northeast.insert(point)){
        return true
      }
      else if(this.northwest.insert(point)){
        return true;
      }
      else if(this.southeast.insert(point)){
        return true;
      }
      else if(this.southwest.insert(point)){
        return true;
      }
    }
  }

  query(range){
    let found=[];

    if(this.boundary.interesects(range)){
      return found;
    }
    else{
      for(let p of this.points){
        if(range.contains(p)){
          found.push(p);
        }
      }
      if(this.divded){
        found.concat( this.northwest.qeury(range));
        found.concat( this.northeast.qeury(range));
        found.concat( this.southwest.qeury(range));
        found.concat( this.southeast.qeury(range));
      }


      return found;
      
    }
  }


  show(){
    stroke(255);
    noFill();
    rectMode(CENTER)
    strokeWeight(1);
    rect(
      this.boundary.x,
      this.boundary.y,
      this.boundary.w*2,
      this.boundary.h*2
      ) ;
      
      // for(let p of this.points){
      //   strokeWeight(4);
      //   point(p.x,p.y);
      // }
    if(this.divided){
      this.northwest.show();
      this.northeast.show();
      this.southwest.show();
      this.southeast.show();
  }

}
}