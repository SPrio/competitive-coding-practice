/*
Question  3.     By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13 and the sum of all these prime numbers is 41. WAP to calculate the sum of the first 10,001st prime numbers? The complexity of the program should be minimal.

*/

#include <iostream>
using namespace std;
int isPrime(int j){
    int count=0;
    for(int i=2;i<=j/2;i++){
        if(j%i==0)
            count=1;
    }
    if(count==0)
    return 1;
    else
    return 0;
}

int main()
{
    int n=6;
    int i=0,j=1;
    int s=0;
    while(1){
        j++;
        if(isPrime(j)){
            s+=j;
            i++;
        }
        if(i==n){
            break;
        }

    }
    cout<<s;
    return 0;
}
