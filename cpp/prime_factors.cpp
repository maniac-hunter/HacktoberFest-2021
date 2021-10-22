// Write a program in C++ that displays all the prime factors of an integer N.

#include <bits/stdc++.h> 
using namespace std; 
int primer(int z){
    int l,val=1;
    for(l=2;l<z;++l){
        if(z%l == 0){val=0;break;}
    }
    return val;
}
void primefactors(int N){  
    int temp,i;
    while(N>1){
        for(i=2;i<=N;++i){
            if(primer(i) == 1){
                temp=N/i;
                if(N==temp*i){cout<<i<<" ";break;}
            }
        }
     N=N/i;
    }
}  
int main()  
{  
    int N;
    cin>>N;
    primefactors(N);  
}
