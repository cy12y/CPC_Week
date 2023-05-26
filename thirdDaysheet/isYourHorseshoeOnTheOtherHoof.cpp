#include <bits/stdc++.h>
using namespace std;
int main() {
  set<int> st;
    for (int i = 0; i < 4; ++i) {
        int c;cin>>c;
        st.insert(c);
    }
    cout<<4-st.size();
}
