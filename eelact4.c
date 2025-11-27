#include <stdio.h>

#define MAX_CUSTOMERS 5
#define MAX_NAME_LEN 50


struct Customer {
    char name[MAX_NAME_LEN];
    int age;
    long acc_no;
    int loans;
    int credit_utilisation;
    int payment_history;
    int income;
    int cibil_score;
};


int calculatecibil(struct Customer c) {
    int score = 300;

    
    if (c.payment_history > 90)
        score += 300;
    else if (c.payment_history > 75)
        score += 200;
    else
        score += 100;

    
    if (c.credit_utilisation > 75)
        score -= 100;
    else if (c.credit_utilisation > 50)
        score -= 50;
    else if (c.credit_utilisation > 25)
        score -= 25;
    else
        score += 100;

    
    if (c.loans > 5)
        score -= 100;
    else if (c.loans >= 3)
        score -= 50;
    else if (c.loans >= 1)
        score -= 25;
    else
        score += 100;

    
    if (c.income > 50000)
        score += 100;
    else if (c.income > 30000)
        score += 50;
    else
        score += 25;

    
    if (score < 300) score = 300;
    if (score > 900) score = 900;

    return score;
}


void inputcustomers(struct Customer customers[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n====================================================================");
        printf("\nEnter details for Customer %d", i + 1);
        printf("\n====================================================================");

        printf("\nName: ");
        scanf(" %c", customers[i].name);
        printf("Age: ");
        scanf("%d", &customers[i].age);
        printf("Account Number: ");
        scanf("%ld", &customers[i].acc_no);
        printf("Number of Existing Loans: ");
        scanf("%d", &customers[i].loans);
        printf("Credit Utilisation (%%): ");
        scanf("%d", &customers[i].credit_utilisation);
        printf("Payment History (%% of on-time payments): ");
        scanf("%d", &customers[i].payment_history);
        printf("Monthly Income (in Rs): ");
        scanf("%d", &customers[i].income);

      
        customers[i].cibil_score = calculatecibil(customers[i]);
    }
}

void ascending(struct Customer customers[], int n) {
    struct Customer temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (customers[i].cibil_score > customers[j].cibil_score) {
                temp = customers[i];
                customers[i] = customers[j];
                customers[j] = temp;
            }
        }
    }
}


void displaycustomers(struct Customer customers[], int n) {
    printf("\n\n============================= CUSTOMER REPORT =============================\n");
    printf("%-20s %-5s %-12s %-10s %-20s %-20s %-10s %-12s\n",
           "Name", "Age", "Acc No", "Loans", "Credit Util(%)",
           "Payment Hist(%)", "Income", "CIBIL Score");
    printf("-------------------------------------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%-20s %-5d %-12ld %-10d %-20d %-20d %-10d %-12d\n",
               customers[i].name, customers[i].age, customers[i].acc_no,
               customers[i].loans, customers[i].credit_utilisation,
               customers[i].payment_history, customers[i].income,
               customers[i].cibil_score);
    }
}


int main() {
    struct Customer customers[MAX_CUSTOMERS];

    printf("\n====================================================================");
    printf("\n              CIBIL SCORE CALCULATION SYSTEM (10 CUSTOMERS)");
    printf("\n====================================================================\n");

    inputcustomers(customers, MAX_CUSTOMERS);
    ascending(customers, MAX_CUSTOMERS);
    displaycustomers(customers, MAX_CUSTOMERS);
    

    return 0;

}
