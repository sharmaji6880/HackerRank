#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s) {
    int n=s.size();
    for(int i=0;i<n;i++) {
        if(s[i]!=s[n-1-i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int q;
    cin>>q;
    while(q--) {
        string s;
        cin>>s;
        if(isPalindrome(s)) {
            cout<<-1<<endl;
            continue;
        }
        int n=s.size();
        for(int i=0;i<n;i++) {
            if(s[i]!=s[n-1-i]) {
                string str1 = s.substr(0,i) + s.substr(i+1,n-i-1);
                string str2 = s.substr(0,n-1-i) + s.substr(n-i,n-1-i);
                if(isPalindrome(str1)) {
                    cout<<i<<endl;
                    break;
                }
                if(isPalindrome(str2)) {
                    cout<<n-1-i<<endl;
                    break;
                }
                cout<<-1<<endl;
                break;
            }
        }
    }
}
