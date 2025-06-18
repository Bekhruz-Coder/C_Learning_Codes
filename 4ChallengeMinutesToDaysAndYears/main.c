#include <stdio.h>

int main(){
    
    int minutes;
    double minutesInYear = (60 * 24 * 365);
    double years;
    double days;
    
    printf("Hello, this is a Time Conversion program!\n");
    printf("Please input minutes for conversion to Years and Days!\n");
    printf("Minutes: ");
    scanf("%d", &minutes);
    
    years = minutes / minutesInYear;
    days = years * 365;
    
    printf("%d minutes are equal to %f years and %f days.", minutes, years, days);
    
    return 0;
}