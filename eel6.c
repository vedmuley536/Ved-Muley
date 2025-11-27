#include <stdio.h>


void printspaces(int n) {
    if (n == 0) return;
    printf(" ");
    printspaces(n - 1);
}


void upperhalf(int i, int n) {
    if (i > n) return;

    printspaces(i - 1);                 
    int width = 2 * (n - i) + 1;        

    for (int j = 1; j <= width; j++) {
        if (i == 1)                    
            printf("*");
        else if (j == 1 || j == width)  
            printf("*");
        else
            printf(" ");
    }
    printf("\n");

    upperhalf(i + 1, n);              
}


void lowerhalf(int i, int n) {
    if (i > n) return;

    printspaces(n - i);              
    int width = 2 * i - 1;

    for (int j = 1; j <= width; j++) {
        if (i == n)                   
            printf("*");
        else if (j == 1 || j == width)  
            printf("*");
        else
            printf(" ");
    }
    printf("\n");

    lowerhalf(i + 1, n);              
}

int main() {
    int n = 10; 

    printf("\nHOLLOW HOURGLASS PATTERN \n\n");

    upperhalf(1, n);
    lowerhalf(1, n);

    return 0;
}