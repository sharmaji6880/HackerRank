#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    
    vector<int> arr(26);
    for(int i=0;i<26;i++) {
        arr[i]=0;
    }
    for(int i=0;i<s.size();i++) {
        if(s[i]!=' ') {
            arr[s[i]-97]++;
        }
    }
    int flag=0;
    for(int i=0;i<26;i++) {
        if(arr[i]==0) {
            flag=1;
            break;
        }
    }
    
    if(flag) {
        cout<<"not pangram\n";
    }
    else {
        cout<<"pangram\n";
    }
    return 0;
}
