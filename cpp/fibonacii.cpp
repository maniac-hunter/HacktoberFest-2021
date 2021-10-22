#include<iostream>
#include<cstdio>
using namespace std;
int fibonaki(int k) { 
    if(k<=1){return k;}
    else{return (fibonaki(k-1))+(fibonaki(k-2));}
} 
 
int main (){ 
    int k;
    cin>>k;
    cout<<fibonaki(k); 
} 
