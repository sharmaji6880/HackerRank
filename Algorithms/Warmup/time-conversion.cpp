#include <bits/stdc++.h>
using namespace std;


string timeConversion(string s) {
    string str;
    int len = s.length();
    if(s[len-2]=='P') {
        
        if(s.substr(0,2)!="12") {
            str = to_string(stoi(s.substr(0,3)) + 12);
            s[0]=str[0];
            s[1]=str[1];
        }
        
        
    
    }
    else if(s[len-2]=='A') {
        if(s.substr(0,2)=="12") {
            s[0]='0';
            s[1]='0';
        }
        
    }
    return s.substr(0,len-2);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
