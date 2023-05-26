#include <bits/stdc++.h>
using namespace std;
int main(){
   string s;cin>>s;
   int upp=0,low=0;
    for (int i = 0; i <s.size(); ++i) {
        if(isupper(s[i])) upp++;
        else low++;
    }
    if(upp>low){
        for (int i = 0; i < s.size() ; ++i) cout<<char(toupper(s[i]));
    }
    else{
        for (int i = 0; i < s.size() ; ++i) cout<<char(tolower(s[i]));
    }
}
