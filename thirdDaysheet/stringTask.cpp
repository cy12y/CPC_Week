#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string res ="";
    for (int i = 0; i < s.size(); ++i) {
        if(isupper(s[i])) s[i]= tolower(s[i]);
        if(s[i]!='o' && s[i]!='i' && s[i]!='u' && s[i]!='y' && s[i]!='a' && s[i]!='e'){
            res+='.';
            res+=s[i];
        }
    }
    cout<<res;
}
