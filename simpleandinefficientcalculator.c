#include <stdio.h>

//inefficient method cannot be the final version of the code
int main(int argc, char const *argv[])
{
  int answer = 0;
  int number1 = 0;
  int number2 = 0;

  printf("ok, let's calculate... what do you want ? \n" "enter the desired number \n" "1 addition \n" "2 subtraction ? \n" "3 multiplication \n");
  scanf("%d", &answer);

  if (answer == 1){
    printf("ok let's do an addition \n" "what is your first number ? \n");
    scanf("%d", &number1);
    printf("what is your second number ? \n");
    scanf("%d", &number2);
    printf("your result is %d \n", number1 + number2);
  }

    if (answer == 2){
    printf("ok let's do a subtraction \n" "what is your first number ? \n");
    scanf("%d", &number1);
    printf("what is your second number ? \n");
    scanf("%d", &number2);
    printf("your result is %d \n", number1 - number2);
  }

    if (answer == 3){
    printf("ok let's do a multiplication \n" "what is your first number ? \n");
    scanf("%d", &number1);
    printf("what is your second number ? \n");
    scanf("%d", &number2);
    printf("your result is %d \n", number1 * number2);
  }
  if (answer > 3 || answer <= 0)
  {
    printf("it will not be possible\n");
    return 0;
  }

  return 0;
}