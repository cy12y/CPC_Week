#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string res ="NO";
    for (int i = 0; i < s.size(); ++i) {
        string s2=s.substr(i,7);
        if(s2=="0000000"||s2=="1111111"){
            res="YES";
            break;
        }
    }
    cout<<res<<endl;
}
