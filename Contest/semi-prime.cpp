#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mx = 1e6+4;
vector<bool> isprime(mx,true);
void sieve(){
    isprime[0]=isprime[1]=false;
    for(int i=2;i*i<mx;i++){
        if(isprime[i]){
            for (int j = i*i; j < mx; j+=i) {
                isprime[j]=false;
            }
        }
    }
}
int32_t main(){
    int n;cin>>n;
    sieve();
    while(n--){
        int a;cin>>a;
        int sr = sqrt(a);
        if(isprime[sr]&&sr*sr==a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
