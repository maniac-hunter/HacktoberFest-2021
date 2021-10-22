#include<iostream>
typedef long long ll;
using namespace std;

const int N= 1e8+5;

ll D,G,X;

double diff(double M,double N){
    double d=M-N;
    return d<0.0?-1.0*d:d;
}
int main(){
        cin>>G;
        cin>>D>>X;
        ll ans=N;
        double average=(G+D)/2.0;
        if (average<X){
            
            ll l=0,r=N;
            double d=N;
            while(l<=r){
                ll T=l+(r-l)/2;
                double N=(T+1)*G+T*D;
                double den=2*T+1;
                double H=(double)N/den;
                double dd=diff(H,X);
                if (dd==d){
                    ans=min(2*T+1,ans);
                    ans=2*T+1;
                    d=dd;
                } 
                else if(dd < d){
                    ans=2*T+1;
                    d=dd;
                }
                if(H<X){
                    r=T-1;
                }
                else {
                l=T+1;
                }
            }
        }
    else{
        ans=2;
    }
    cout<<ans<<endl;
}
