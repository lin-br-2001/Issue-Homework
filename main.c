/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void){
    
    unsigned int N1, N2, N3;
    
    printf("%s", "N1:");
    scanf("%d", &N1);
    
    printf("%s", "N2:");
    scanf("%d", &N2);
    
    printf("%s", "N3:");
    scanf("%d", &N3);
    
    if(N1>N2 && N1>N3){
        printf("The greatest one is %d\n", N1);
        if(N1%2==0){
            printf("The greatest one is an even number.\n");
        }
        if(N1%2!=0){
            printf("The greatest one is an odd number.\n");
        }
    }
    if(N2>N1 && N2>N3){
        printf("The greatest one is %d\n", N2);
        if(N2%2==0){
            printf("The greatest one is an even number.\n");
        }
        if(N2%2!=0){
            printf("The greatest one is an odd number.\n");
        }
    }
    if(N3>N2 && N3>N1){
        printf("The greatest one is %d\n", N3);
        if(N3%2==0){
            printf("The greatest one is an even number.\n");
        }
        if(N3%2!=0){
            printf("The greatest one is an odd number.\n");
        }
    }
    if(N1<N2 && N1<N3){
        printf("The smallest one is %d\n", N1);
        if(N1%2==0){
            printf("The smallest one is an even number.\n");
        }
        if(N1%2!=0){
            printf("The smallest one is an odd number.\n");
        }
    }
    if(N2<N3 && N2<N1){
        printf("The smallest one is %d\n", N2);
        if(N2%2==0){
            printf("The smallest one is an even number.\n");
        }
        if(N2%2!=0){
            printf("The smallest one is an odd number.\n");
        }
    }
    if(N3<N2 && N3<N1){
        printf("The smallest one is %d\n", N3);
        if(N3%2==0){
            printf("The smallest one is an even number.\n");
        }
        if(N3%2!=0){
            printf("The smallest one is an odd number.\n");
        }
    }
}