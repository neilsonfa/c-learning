#include <stdio.h>

int main(){
    float height, weight, bmi;

    printf("Digite a altura em cm: ");
    scanf("%f", &height);
    printf("Digite o peso em Kg: ");
    scanf("%f", &weight);

    bmi = weight/(height * height);

    if(bmi < 18.5){
        printf("Underweight");
    }
    else if(bmi > 25){
        printf ("Overweight");
    }
    else{
        printf("Normal");
    }
    return 0;
}