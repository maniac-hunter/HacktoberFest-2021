#include <iostream>
using namespace std;
long long N;
int A=0;
const int K = 1e5+3;

long long dp[K];
int main(){
    cin>>N;
    dp[0]=1;
    dp[1]=2;
    
    int j=2;
    while(j<K-1){
        dp[j]=dp[j-1]+dp[j-2];
        j++;
    }
    
    int i=1;
    while(i<K-1){
        if(N<dp[i] && N>=dp[i-1]){
            A=i-1;
            break;
        }
        else{
        }
        i++;
    }
    cout<<A;
    cout<<endl;
    return 0;
}

