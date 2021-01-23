//L system

/* Alphabet, Axiom(beginning), set of rules(A->AB) (B->A) 

0: A
1: AB
2: AB A 
3: AB A AB
*/

let axiom= "F";
let sentence = axiom;
let len=100;
let angle;

let rules = [];
rules[0]={
  a:"F",
  b:"FF+[+F-F-F]-[-F+F+F]"
}


function generate(){
  len*=0.56
  let nextSentence="";
  for(let i=0;i<sentence.length;i++){

    //charAt() 함수는 문자열에서 특정 인덱스에 위치하는  유니코드 단일문자를 반환합니다. 
    let current= sentence.charAt(i);
    let found=false;
    for(let j=0;j<rules.length;j++){
      if(current==rules[j].a){
        found=true
        nextSentence+=rules[j].b 
        break;
      }
    }
    if(!found){
      nextSentence+=current
    }
  }
  sentence=nextSentence
  createP(sentence);
  turtle()

}

function turtle(){
  background(51)
  //resetMatrix=Replaces the current matrix with the identity matrix.
  //since not using draw, guarantees that i can draw over again
  resetMatrix()

    translate(width/2,height)
    stroke(255,100)
    for(let i =0; i<sentence.length;i++){
      let current= sentence.charAt(i);

      if(current =="F"){
        line(0,0,0,-len)
        translate(0,-len)
      }
      else if(current=="+"){
        rotate(angle)
      }else if(current=="-"){
        rotate(-angle)
      }
      else if(current=="["){
        push()
      }
      else if(current=="]"){
       pop()
      }
    
  }
    }

function setup() {
 createCanvas(400,400)
 angle=radians(25)
 background(51)
 createP(axiom);
 turtle();
 let button=createButton("generate");
 button.mousePressed(generate)
}

