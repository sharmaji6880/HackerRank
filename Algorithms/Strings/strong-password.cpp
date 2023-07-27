#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n>>ws;
    string s;
    getline(cin,s);
    string numbers = "0123456789";
    string lower_case = "abcdefghijklmnopqrstuvwxyz";
    string upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special_characters = "!@#$%^&*()-+";
    
    int n_count=0,l_count=0,u_count=0,s_count=0;
    for(int i=0;i<s.length();i++) {
        if(s[i]-'0'>=0 && s[i]-'0'<=9) {
            n_count++;
        }
        else if(s[i]-97>=0 && s[i]-97<=25) {
            l_count++;
        }
        else if(s[i]-65>=0 && s[i]-65<=25) {
            u_count++;
        }
        else if(s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='&' || s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='*' || s[i]=='(' || s[i]==')' || s[i]=='-' || s[i]=='+') {
            s_count++;
        }
    }
    int num = !n_count + !l_count + !u_count + !s_count;
    
    if(num+s.length() < 6) {
        cout<<6-s.length();
    }
    else {
        cout<<num;
    }
    
    return 0;
    
}
