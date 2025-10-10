#include <stdio.h>

int main() {
    int paymenthistory, creditutilisation, income, loans;
    
    int score = 300;
    printf("\n====================================================================");
    printf("\n                    CIBIL SCORE CALCULATION SYSTEM                  ");
    printf("\n====================================================================");
    
    printf("\n\nEnter Payment History ( in percentage )     : ");
    scanf("%d",&paymenthistory);
    
    printf("\nEnter Credit Utilisation ( in percentage )  : ");
    scanf("%d",&creditutilisation);
    
    printf("\nEnter Number of Existing Loans              : ");
    scanf("%d",&loans);
    
    printf("\nEnter Monthly Income                        : ");
    scanf("%d",&income);
    
    //Payment history
    if (paymenthistory > 90)
        score += 300;
    else if (paymenthistory > 75)
        score += 200;
    else
        score += 100;
        
    //Credit Utilisation
    if (creditutilisation > 75)
        score -= 100;
    else if (creditutilisation > 50)
        score -= 50;
    else if (creditutilisation > 25)
        score -= 25;
    else
        score += 100;
        
    //Existing Loans
    if (loans > 5)
        score -= 100;
    else if (loans >= 3)
        score -= 50;
    else if (loans >= 1)
        score -= 25;
    else 
        score += 100;
        
    //Monthly Income
    if (income > 50000)
        score += 100;
    else if (income > 30000)
        score += 50;
        
    //Limit the credit score between 300 to 900
    if (score > 900) score = 900;
    if (score < 300) score = 300;
   printf("\n===================================================================="); 
   printf("\n                    CIBIL SCORE SYSTEM                  ");
   printf("\n====================================================================");
   printf("\n\nPayment History                             : %d",paymenthistory);
   printf("\nCredit Utilisation                          : %d",creditutilisation);
   printf("\nNumber of Loans                             : %d",loans);
   printf("\nMonthly Income                              : %d",income);
   printf("\n--------------------------------------------------------------------");
   printf("\nCalculated CIBIL SCORE is                   : %d",score);
   printf("\n--------------------------------------------------------------------");
   
  

    return 0;
}