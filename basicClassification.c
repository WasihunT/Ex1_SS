#include "NumClass.h"
#include <math.h>

/* will return if a number is prime*/ 
int isPrime(int n){
int flag=1;
if(n==1) return flag;
for (int i = 2; i <n; i++)
{
   if(n%i==0) return 0;
}
return flag;
}



/*helper function- factorial*/

int factorial(int num){
   if(num==0 || num==1) return 1;

   return num*factorial(num-1);
}
/*Strong number is a special number whose sum of the factorial of digits is equal to the original 
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int n){
   int temp, sum=0, remainder;
   temp=n;
   for(temp=n; temp!=0; temp/=10){
   remainder=temp%10;
   
   sum+= factorial(remainder);
   }

   if(sum==n) return 1;
   return 0;
}