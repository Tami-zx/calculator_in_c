#include <stdio.h>

// Groups the arguments used by the functions; if tomorrow there are more parameters, just put them here
// it's simpler just to define and pass the struct name, than to pass 1000 arguments
typedef struct
{
  int *pn1;
  int *pn2;
}pointers;

// separate function to ask the questions and not cause unnecessary repetition
void askcons(pointers p){
  printf("what is your first number ? \n");
  scanf("%d", p.pn1);
  printf("what is your second number ? \n");
  scanf("%d", p.pn2);
}

// void system to make the code cleaner and more efficient
// use voids it's very ugly to use everything directly in main (you silly)
void calculation(pointers p){

  int answer = 0;
printf("ok, let's calculate... what do you want ? \n" "enter the desired number \n" "1 addition \n" "2 subtraction ? \n" "3 multiplication \n");
scanf("%d", &answer);
#define numr "your result is"


// case system to avoid using billions of if's
switch (answer)
{
case 1:
  printf("ok let's do an addition \n");
  askcons(p);
  printf(numr" %d \n", *p.pn1 + *p.pn2);
  break;
case 2:
  printf("ok let's do a subtraction\n");
  askcons(p);
  printf(numr" %d \n", *p.pn1 - *p.pn2);
break;
case 3:
  printf("ok let's do a multiplication \n");
  askcons(p);
  printf(numr" %d \n", *p.pn1 * *p.pn2);
break;
default:
printf("this answer is invalid\n");
  break;
}

}

int main(int argc, char const *argv[])
{ // TODO:use a more organized system next time
  int number1 = 0,number2 = 0;
  int *pn1 = &number1;
  int *pn2 = &number2;
  pointers p;
  p.pn1 = pn1;
  p.pn2 = pn2;
  calculation(p);
  return 0;
}