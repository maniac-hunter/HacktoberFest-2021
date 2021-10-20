#include<iostream>
#include<cstdio>
#include<bits/stdc++.h>
using namespace std;

long long dp[2][100000];

int main(){
    int N;
    cin>>N;
    long long L1[N];
    long long L2[N];
    for(int i=0;i<N;i++){
        cin >> L1[i];
    }
    for(int i=0;i<N;i++){
        cin>>L2[i];
    }
    
    dp[0][0]=L1[0];
    dp[1][0]=L2[0];
        for(int i=1;i<N;i++){
            dp[0][i]=max(dp[0][i-1],dp[1][i-1]+L1[i]);
            dp[1][i]=max(dp[1][i-1],dp[0][i-1]+L2[i]);
        }
        
        cout<<max(dp[0][N-1],dp[1][N-1]);
    
}



