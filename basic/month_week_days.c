
// C program to convert Numer of Days to Year, Month, Week and Days 
 
#include <stdio.h>  
   
int main() {  
    int inputDays, years, months, weeks, days;  

    printf("Enter number of Days\n");  
    scanf("%d", &inputDays);  
   
    /* 
     * 1 Year = 365 Days, 1 Month = 30 Days, 1 Week = 7 Days
     * and assuming 1 Month = 30 Days   
     */ 
    years = inputDays/365;
    
    inputDays = inputDays - years*365; 
    months = inputDays/30;

    inputDays = inputDays - months*30; 
    weeks = inputDays/7;
    
    inputDays = inputDays - weeks*7; 
    days = inputDays;
     
    printf("Years : %d\n", years);  
    printf("Months : %d\n", months);  
    printf("Weeks : %d\n", weeks);  
    printf("Days : %d", days);  
   
    return 0;  
} 