#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> st;
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        int size = st.size();
        st.insert(s);
        if(st.size()==size) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
