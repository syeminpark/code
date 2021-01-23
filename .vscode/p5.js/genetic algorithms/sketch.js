//probability of fliiping coint 1/2. twice in a row 4/1 
//probability of to be or not to be that is the question
// t=1/27 all= 1/27**39(total characters
//brute force search= tries every possible outcome
//evolutionary search. the opposite. 

/* Darwinian Natural Selection
1.Heredity-children receive the properties of their parents. 
2. variation. variety of traits present in population. or  a means to introduce variation. 
3. selection. some can be parents and pass down info. some not= survival of the fittest. 

1. create a a population of n elements with random genetic material(digital DNA) ex: unijorn, pancake, aaaah
2. A. calculate fitness for n elements. ex: the number of characters that match the target phrase
2. B Reproduction / selection   must end up with population of n elements. 
    -pick 2 "parents".  the higher the fitness. the more likely it will get picked. 
    -make new element(cross over/mutation ) 
          cross over: uni/journ   pop/ corn = unicorn(combine two high possibilities)
          mutation: additional variation. percentage rate= for each characters 1percent chance of mutation. 

larger population= faster to find the answer but slows down the computation performance speed. tradeoff
mutation to high=random

*/

function setup() {
  createCanvas(400, 400);
}

function draw() {
  background(220);
}
