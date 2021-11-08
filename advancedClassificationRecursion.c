#include "NumClass.h"
#include <math.h>

 int reversNum(int n, int res){
		if(n==0) return res;
		
		res= res*10+ n%10;
		return reversNum(n/10, res);
		}

/* will return if a number is a palindrome */ 
int isPalindrome(int n){
  int temp=reversNum(n, 0);
  if(temp==n) return 1;
  return 0; 
}






 int countDigit(int n) 
	{
		int c=0, temp=n;
		for (temp=n; temp!=0; c++) {
			temp/=10;
		}
		return c;
	}



	int isArm_Help(int n, int p){
		  
		if(n==0) return 0;
		 
		int ans=pow(n%10,p);
		
		return ans + isArm_Help(n/10, p);
		}
/* will return if a number is Armstrong number 
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int num) {
    int digitNum=countDigit(num), temp=isArm_Help(num,digitNum);

    if(temp==num) return 1;
    return 0;  
}