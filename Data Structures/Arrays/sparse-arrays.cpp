#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<string> stringList(n);
    map<string,int> count;
    for(int i=0;i<n;i++) {
        cin>>stringList[i];
        count[stringList[i]]++;
    }
    int q;
    cin>>q;
    vector<string> queries(q);
    for(int i=0;i<q;i++) {
        cin>>queries[i];
        cout<<count[queries[i]]<<endl;
    }
    return 0;
}
