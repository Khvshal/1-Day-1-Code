/*
Given an array of integers, find the one that appears an odd number of times.

There will always be only one integer that appears an odd number of times.

Examples
[7] should return 7, because it occurs 1 time (which is odd).
[0] should return 0, because it occurs 1 time (which is odd).
[1,1,2] should return 2, because it occurs 1 time (which is odd).
[0,1,0,1,0] should return 0, because it occurs 3 times (which is odd).
[1,2,2,3,3,3,4,3,3,3,2,2,1] should return 4, because it appears 1 time (which is odd).
*/

#include <stdio.h>

int func(int *I,int n){
    int arr[10]={0};
    for(int i=0;i<n;i++){
     for(int ii=0;ii<10;ii++){
        if (I[i]==ii){++arr[ii];}
     }
    }

    for(int i=0;i<10;i++){
        if (arr[i]%2!=0 && arr[i]!=0){
            return i;
        }
    }
}

int main(){
    printf("Enter the number of elements in the array:");
int n;
    scanf("%d",&n);
int arrn[n];
for(int i=0;i<n;i++){
    printf("Enter element %d:",i+1);
    scanf("%d",&arrn[i]);
}

printf("The number with odd number of occurances is %d",func(arrn,n));
}