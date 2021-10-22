#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 
const int maxN=100000;

int A[maxN],D[maxN];
 
int main(){
    int N;
    int M;
    cin>>M;
    cin>>N;
    int K;
    cin>>K;
	for(int i=1;i<=N;i++){
        cin>>A[i];
    }
	for(int i=1;i<N;i++){
        D[i]=A[i+1]-A[i];
    }
	int MIN=A[N]-A[1]+1;
    
	sort(D+1,D+N);

	int P=N-1;
	K-=1;
	while(K--){
		MIN-=(D[P--]-1);
    };
    cout<<MIN;
}
