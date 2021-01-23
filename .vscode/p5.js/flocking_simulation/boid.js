class Boid{
    constructor(){
        this.position=createVector(random(width),random(height))
        //랜덤한 차원 벡터로 속력값을 만든다. 
        this.velocity=p5.Vector.random2D()
        //길이, 즉 크기를 2에서 4 사이로 제한시킨다.
        this.velocity.setMag(random(2,4))
        this.acceleration=createVector()
        //최대 크기 및 속도 변수. maxforce 1이면 없는거랑 동일하고 0.01의 작은 값이면 속력변화가 적다.
        //처음에 폭발하는 듯한 효과는 같은 크기, 다른 방향성을 가지고 있어서이다.
        this.maxForce=0.2
        this.maxSpeed=4
    }

    //align gets array of different boids=boids
    align(boids){
        //사정거리
        let perception=50

        let steering= createVector();
        let total=0;
        for(let other of boids){
            //내 위치와 다른 애들의 위치의 거리
            let d=dist(this.position.x,this.position.y,other.position.x,other.position.y)
        //같은 구간 내에 있고 자신이 아닌 다른 boids에 해당하면, 다른 이의 속력을 steering에 추가하며 개수를 센다
        if(other!= this && d<perception){
            steering.add(other.velocity)
            total++
            }

        //하나라도 영역을 공유하면, 전체 영역의 개수만큼 나눈다. 그리고 크기를 정하고. 거기서 속력만큼 빼서 steering을 하고 최대크기만큼 제한한다? 즉 같은 크기.
    
        }
        if(total>0){
        steering.div(total)
        //없으면 속도가 저하된다. 없으면 steering 자체의 평균 속도가 된다. 있으면 방향만 사용을 하게 된다. 
        steering.setMag(this.maxSpeed)
        //sterringforce=desired(average==steering)-velocity
        steering.sub(this.velocity)
        steering.limit(this.maxForce)
        } 
        return steering
    }

    //copy of align
    cohesion(boids){
        let perception=50

        let steering= createVector();
        let total=0;
        for(let other of boids){
            let d=dist(this.position.x,this.position.y,other.position.x,other.position.y)
      
        if(other!= this && d<perception){
           //this.velocity를 this.position으로 바꿔준다. 
            steering.add(other.position)
            total++
            }

      
        }
        if(total>0){
        steering.div(total)
   
        //steering=average location(position) need a vector in that direction. 
        steering.sub(this.position)
        steering.setMag(this.maxSpeed)
        steering.sub(this.velocity)
        steering.limit(this.maxForce)
        } 
        return steering
    }

    //copy of cohesion
    seperation(boids){
        let perception=50

        let steering= createVector();
        let total=0;
        for(let other of boids){
            let d=dist(this.position.x,this.position.y,other.position.x,other.position.y)
      
        if(other!= this && d<perception){
            let diff=p5.Vector.sub(this.position,other.position)
            //inversely proportional. further away= the lower the magntitude
            diff.div(d)
            steering.add(diff)
            total++
            }

      
        }
        if(total>0){
        steering.div(total)
        steering.setMag(this.maxSpeed)
        steering.sub(this.velocity)
        steering.limit(this.maxForce)
        } 
        return steering
    }

    edges(){
        //화면 영역을 벗어나면 다시 생성되게 하는 역할 
        if(this.position.x>width){
            this.position.x=0
        }
        else if(this.position.x<0){
            this.position.x=width
        }
        if(this.position.y>height){
            this.position.y=0
        }
        else if(this.position.y<0){
            this.position.y=height
        }
    }

    flock(boids){
        //align을 통해 리턴되는 값인 steering을 변수에 저장하고 가속도로 사용한다.

        // force accumulation 방식으로 alignment이랑 cohesion을 합친다. 

    //these types of forces should not! accumulate over time!
        this.acceleration.set(0,0)
        let alignment=this.align(boids)
        let cohesion= this.cohesion(boids)
        let seperation=this.seperation(boids)

        //sliders to manually control
        alignment.mult(alignSlider.value())
        cohesion.mult(cohesionSlider.value())
        seperation.mult(seperationSlider.value())


        this.acceleration.add(alignment)
        this.acceleration.add(cohesion)
        this.acceleration.add(seperation)
    }

    update(){
        //acceleration effects velocity which effects position
        this.position.add(this.velocity);
        this.velocity.add(this.acceleration)
        this.velocity.limit(this.maxSpeed)
    
    }

    show(){
        strokeWeight(8)
        stroke(255)
        point(this.position.x,this.position.y)
    }
}