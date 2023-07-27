#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++) {
        if(int(s[i])>=65 && int(s[i])<=90) {
            count++;
        }
    }
    cout<<count+1;
    return 0;
}
