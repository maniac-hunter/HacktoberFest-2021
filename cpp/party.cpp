#include <iostream>
using namespace std;
int T;

void Island(){
    int K;
	int N;
	cin >>N;
    cin>>K;

	int H[1+N];
    int j=1;
    while(j<=N){
        cin>>H[j];
        j++;
    }

	int i=1;
	while(K>0){
		i=1;
		while(H[i]>=H[i+1] && i<N){
            i++;
        }
        if(i==N){
            break;
        }
        K--;
		H[i]++;
	}
	if(K<0){
        cout<<i;
        cout<<endl;
    }
    else if(K==0){
        cout<<i;
        cout<<endl;
    }
	else{
        cout<<-1;
        cout<<endl;
    }
}

int main(){
	cin>>T;
	while(T--){
        Island();
    }
}
