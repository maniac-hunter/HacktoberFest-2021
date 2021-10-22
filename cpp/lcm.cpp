#include<iostream>
using namespace std;

int lcm(int a,int b){
    if(a==b){return a;}
    else{
        if(b<a){return lcm(a-b,b);}
        else{return lcm(a,b-a);}
    }
}

int main(){
    int N1,N2;
    cin>>N1>>N2;
    cout<<(N1*N2)/lcm(N1,N2);
}
