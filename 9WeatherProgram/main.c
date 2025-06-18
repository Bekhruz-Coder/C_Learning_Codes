#include <stdio.h>
#include <stdlib.h>

#define YEARS 5
#define MONTHS 12

int main(void)
{
	float rain[YEARS][MONTHS] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    int year = 0;
    int month = 0;
    float rainfall = 0;
    int fiveYears = 2010;
    float yearlyAverage = 0;
    
    int i = 0; 
    int j = 0;
    
    printf("YEAR    RAINFALL (inches)\n");
    
    for(year = 0; year < YEARS; year++){
        for(month = 0; month < MONTHS; month++){
            rainfall += rain[year][month];
        }
        yearlyAverage += rainfall;
        printf("%d      %.1f\n", fiveYears, rainfall);
        fiveYears++;
        rainfall = 0;
    }
    yearlyAverage = yearlyAverage / YEARS;
    printf("\nThe yearly average is %.1f inches.\n", yearlyAverage);
    
    printf("\n");
    
    printf("MONTHLY AVERAGES:\n");
    printf("\n");
    
    char months[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (i = 0; i < 12; i++){
        printf("%s   ", months[i]);
    }
    printf("\n");
    
    float monthlyAverage = 0; 
    for(month = 0; month < MONTHS; month++){
        for(year = 0; year < YEARS; year++){
            monthlyAverage += rain[year][month];
        }
        monthlyAverage /= YEARS;
        printf("%.1f   ", monthlyAverage);
        monthlyAverage = 0;
    }
    
    
    
	return 0;
}
