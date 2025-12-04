#include<stdio.h>


int count (const char *s){
    if(*s == '\0'){
        return 0;
    }
    else {
        return 1 + count(s+1);
    }
}

int main (){
    const char *a = "Ved";
    
    int length = count(a);
    printf("The length of \"%s\" ; %d\n", a,length);
    
    return 0;
}
