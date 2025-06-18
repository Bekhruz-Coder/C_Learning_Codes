#include <stdio.h>

int main(){
    // declaring variables
    double width;
    double height;
    double perimeter = 0;
    double area = 0;
    
    //ingputing the values
    printf("Hello this is the Calculator of the perimeter of rectangle!\n");
    printf("Input the widht: ");
    scanf("%lf", &width);
    printf("Input the height: ");
    scanf("%lf", &height);
    
    printf("\n");
    
    // performing perimeter calculation
    perimeter = 2.0 * (height+width);
    area = width*height;
    
    // displaying
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    printf("The area of the rectangle is: %.2f\n", area);
    
    return 0;
}