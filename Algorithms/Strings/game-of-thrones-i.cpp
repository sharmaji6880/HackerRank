#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameOfThrones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string gameOfThrones(string s) {
    map<char,int> mymap;
    for(int i=0;i<(int)s.size();i++) {
        mymap[s[i]]++;
    }
    map<char,int>::iterator it;
    int count=0;
    for(it=mymap.begin();it!=mymap.end();it++) {
        if((it->second) % 2 ==1) {
            count++;
        }
    }
    if(count<=1) {
        return "YES";
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
