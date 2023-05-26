#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string s2;cin>>s2;
    reverse(s.begin(),s.end());
    if(s2==s)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
