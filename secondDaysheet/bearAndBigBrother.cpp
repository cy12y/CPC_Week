#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    int counter=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        counter++;
    }
    cout<<counter;
}
