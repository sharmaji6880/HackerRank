#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.length();i++) {
        if(i%3==0 || i%3==2) {
            if(s[i]!='S') {
                count++;
            }
        }
        else if(i%3==1) {
            if(s[i]!='O') {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
