/* The following assumptions should be made:
   - Basic pay rate = $12.00/hr
   - Overtime (in excess of 40 hours) = time and a half
   - Tax rate:
       - 15% of the first $300
       - 20% of the next $150
       - 25% of the rest */

#include <stdio.h>

int main(){
    int workedHours = 0;
    int extraHours = 0;
    float payRate = 12.00; // $12.00 for hour
    float extraPayRate = 18.00; //$18.00 for after 40 hours
    float grossPay = 0.0;
    float extraGrossPay = 0.0;
    float netPay = 0.0;
    float taxes = 0.0;
    float extraTaxes1 = 0.0;
    
    printf("Please enter your worked hours in a week.\n");
    printf("Worked hours: ");
    scanf("%d", &workedHours);
    
    if(workedHours <= 40){
        grossPay = workedHours * payRate;
    }else if(workedHours > 40){
        extraHours = workedHours - 40;
        grossPay = 40 * payRate + extraHours * extraPayRate;
    }
    
    if(grossPay <= 300){
        taxes = grossPay * 0.15;
        netPay = grossPay - taxes;
    }else if(grossPay > 300 && grossPay <= 450){
        extraGrossPay = grossPay - 300;
        extraTaxes1 = extraGrossPay * 0.20;
        taxes = 300 * 0.15 + extraTaxes1;
        netPay = grossPay - taxes;
    }else if(grossPay > 450){
        extraGrossPay = grossPay - 450;
        extraTaxes1 = extraGrossPay * 0.25;
        taxes = 300 * 0.15 + 150 * 0.20 + extraTaxes1;
        netPay = grossPay - taxes;
    }
    
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);
    
    return 0;
}