#include <stdio.h>

int main(){
  int num1, num2, num3, num4, Max, Min;
  printf("Enter num1: ");
  scanf("%d", &num1);
  printf("Enter num2: ");
  scanf("%d", &num2);
  printf("Enter num3: ");
  scanf("%d", &num3);
  printf("Enter num4: ");
  scanf("%d", &num4);

  Max = num1;
  Min = num1;

  if(num2 > Max) {
    Max = num2;
  }
  if(num2 < Min) {
    Min = num2;
  }
  if(num3 > Max) {
    Max = num3;
  }
  if(num3 < Min) {
    Min = num3;
  }
  if(num4 > Max) {
    Max = num4;
  }
  if(num4 < Min) {
    Min = num4;
  }
  printf("Max = %d\n", Max);
  printf("Min = %d\n", Min);

  return 0;
}