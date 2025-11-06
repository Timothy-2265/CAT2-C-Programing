/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:6/11/2025
Description:GROSS WAGE
*/
#include <stdio.h>

int main() {
    float hours, hourly_wage, grossPay, tax, netPay;

    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    
    if (hours > 40)
        grossPay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
    else
        grossPay = hours * hourly_wage;

    
    if (grossPay <= 600)
        tax = 0.15 * grossPay;
    else
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));

    
    netPay = grossPay - tax;

    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);

    return 0;
}