#include <bits/stdc++.h>
using namespace std;
int main(){
   int n,counter=0; cin>>n;
   while(n--){
       int a,b;cin>>a>>b;
       if(a+2<=b) counter++;
   }
   cout<<counter;
}
