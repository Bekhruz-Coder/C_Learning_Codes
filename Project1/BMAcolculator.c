#include <stdio.h>

int main(void){
    float height;
    float weight;
    
    printf("What's your height cm(ex: 1.75): ");
    scanf("%f", &height);
    printf("What's your weight kg(ex: 75): ");
    scanf("%f", &weight);
    
    float bma = weight/(height*height);
    
    printf("Your BMA is: %.2f", bma);
    
    return 0;    
    
}