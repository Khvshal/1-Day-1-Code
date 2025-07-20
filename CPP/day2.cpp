/*
Digital root is the recursive sum of all the digits in a number.
Given n, take the sum of the digits of n. 
If that value has more than one digit, continue reducing in this way 
until a single-digit number is produced. The input will be a non-negative integer.

Examples
    16  -->  1 + 6 = 7
   942  -->  9 + 4 + 2 = 15  -->  1 + 5 = 6
132189  -->  1 + 3 + 2 + 1 + 8 + 9 = 24  -->  2 + 4 = 6
493193  -->  4 + 9 + 3 + 1 + 9 + 3 = 29  -->  2 + 9 = 11  -->  1 + 1 = 2
*/ 

#include <iostream>
using namespace std;

int recursive_root(int n){
  int nd=0,sum=0;

  while(n>=1){
    int num=n%10;
    sum+=num;
    n/=10;
  }
  int numsum=sum;
  while(numsum>=1){
    numsum/=10;
    nd++;
  }

  if(nd>1)
   recursive_root(sum);
   else
     return sum;
}

int main(){
cout<<recursive_root(493193);
}