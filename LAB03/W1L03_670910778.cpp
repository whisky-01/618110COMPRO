#include <stdio.h>

int main(){
  float weight, height, bmi;

  printf("Enter weight (kg): ");
  scanf("%f", &weight);

  printf("Enter height (m): ");
  scanf("%f", &height);
  bmi = weight / (height * height);

  printf("BMI = %.1f\n",bmi);

  if (bmi < 18.5) {
    printf("Underweight");
  }
  else if (bmi >= 18.5 && bmi <= 24.9) {
    printf("Normal weight");
  }
  else if (bmi >=25.0 && bmi <= 29.9) {
    printf("Overweight");
  }
  else {
    printf("Obesity");
  }
  return 0;
}
