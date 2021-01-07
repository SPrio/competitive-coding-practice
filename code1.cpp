/*
Question 1.    WAP to calculate the largest prime number less than 1,000,000 which is a sum of prime numbers and is a prime number itself(no-repeat prime number). The complexity of the program should be minimal.
*/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

vector<int> prime_list;

void setPrimeList(){
    int n = 1000000;
    int n_rt=sqrt(n);

    int checked[n/2+500] = {0};
    for(int a=1;a<=(n_rt)/2;a++){
        for(int b=(a*(a+1))<<1;b<=n/2;b=b+2*a+1){
            checked[b]=1;
        }
    }

    prime_list.push_back(2);

    for(int c=1;c<=n/2;c++){
        if(checked[c]==0){
            prime_list.push_back(2*c +1);
        }
    }

}

int search(int l, int r, int n){
    if(l<=r){
        int m=(l+r)/2;
        if(m==0 || m== prime_list.size()-1)
            return prime_list[m];
        if(prime_list[m]==n)
            return prime_list[m-1];
        if(prime_list[m]<n && prime_list[m+1]>n)
            return prime_list[m];
        if(n<prime_list[m])
            return search(l,m-1,n);
        else
            return search(m+1,r,n);
    }
    return 0;
}
int main()
{
    setPrimeList();
    int n=1000000;
    cout<< search(0, prime_list.size()-1, n);

    return 0;
}
