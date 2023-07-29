#include <bits/stdc++.h>
using namespace std;

bool isPresent(char c , string s) {
    for(int i=0;i<s.size();i++) {
        if(s[i]==c) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    // vector<int> another(26);
    // for(int i=0;i<26;i++) {
    //     another[i]=0;
    // }
    int count=0;
    for(int i=0;i<26;i++) {
        int flag=0;
        char c = (char) (i+97);
        for(int j=0;j<n;j++) {
            if(!isPresent(c,arr[j])) {
                flag=1;
                break;
            }
        }
        if(!flag) {
            count++;
        }
    }
    cout<<count;
    
    return 0;
    
}
