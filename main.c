#include <stdio.h>
#include "NumClass.h"
#include "advancedClassificationRecursion.c"
#include "basicClassification.c"

int max(int n, int m){
   int maxnum=n;
   if(n<m){maxnum=m;}
   return maxnum;
}

int min(int n, int m){
   int minnum=n;
   if(n>m){minnum=m;}
   return minnum;
}


int main(){
     int fnum, snum, maximum, minimum;
     scanf("%d",&fnum);
     scanf("%d",&snum);

    maximum=max(fnum,snum);
    minimum=min(fnum,snum);

printf("The Armstrong numbers are: ");
    for(int i=minimum; i<=maximum; i++){
       if(isArmstrong(i)==1){
       printf("%d ", i);
       }
    }

   printf("\n");


    printf("The Palindromes are: ");
    for(int i=minimum; i<=maximum; i++){
       if(isPalindrome(i)==1){
       printf("%d ", i);
       }
    }

    printf(" \n");
   

    printf("The Prime numbers are: ");
    for(int i=minimum; i<=maximum; i++){
       if(isPrime(i)==1){
       printf("%d ", i);
       }
    }

    
    printf(" \n");

    
    printf("The Strong numbers are: ");
    for(int i=minimum; i<=maximum; i++){
       if(isStrong(i)==1){
       printf("%d ", i);
       }
    }


    
     return 0;
}



