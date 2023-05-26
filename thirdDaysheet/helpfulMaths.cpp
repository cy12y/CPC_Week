#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;cin>>s;
    int arr[100];
    int size=0;
    for (int i = 0; i < s.size(); i += 2) {
        arr[size++]=int(s[i])-'0';

    }
    sort(arr,arr+size);
    for(int i=0;i<size;i++){
        if(i!=size-1) {
            cout << arr[i] << "+";

        }
        else {
            cout << arr[i] << endl;

        }
    }
    return 0;
}
