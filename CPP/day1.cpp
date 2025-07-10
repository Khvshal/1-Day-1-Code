/*
you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 9^2 is 81 and 1^2 is 1. (81-1-1-81)

Example #2: An input of 765 will/should return 493625 because 7^2 is 49, 6^2 is 36, and 5^2 is 25. (49-36-25)

Note: The function accepts an integer and returns an integer.*/

#include <iostream>
#include <string>
using namespace std;

int func(int n){//using string
    string result="";
    int nn;
    while(n>1){
      nn=n%10;
      n/=10;
      result=to_string(nn*nn)+result;}
    return stoi(result);
}

int func2(int n){//method 2
    int m=0,a=1;
    while(n>0){
        int nn=n%10;
        int sq=a*nn*nn;
        m+=sq;
        a*= (nn<=3)? 10:100;
        n/=10;
    }
    return m;
}


int main(){
cout<<"Enter number:";
int n;
cin>>n;
cout<<func(n);
cout<<endl<<func2(n);
}




