// Convert a decimal number into binary without using an array

#include <iostream>
using namespace std;
int main(){
    int i=1,j,N,Bn=0,D_Num=N;
    cin>>N;
    j=N;
    do{
        Bn=Bn+(N%2)*i;
        i*=10;
        N/=2;
        j/=2;
        }
    while(j>0);{cout<<Bn;}
}
