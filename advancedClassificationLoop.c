#include "NumClass.h"
#include <math.h>

/* will return if a number is a palindrome */ 
int isPalindrome(int n){
    int num=n, remainder,rever=0;
  
    while (n != 0) {
        remainder = n % 10;
        rever = rever * 10 + remainder;
        n /= 10;
    }
if(num==rever) return 1;

return 0;
}


/* will return if a number is Armstrong number 
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/

int isArmstrong(int n){
int temp,remainder, count=0, sum=0;
temp=n;
for(temp=n; temp!=0; ++count){
    temp/=10;
}

for(temp=n; temp!=0; temp/=10){
   remainder=temp%10;
   
   sum+= pow(remainder, count);
}

if(sum==n) return 1;
 return 0; 
}