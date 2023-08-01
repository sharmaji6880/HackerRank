#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin>>n>>q;
    cin>>ws;
    vector<vector<int>> queries(q);
    for(int i=0;i<q;i++) {
        int x,y,z;
        cin>>x>>y>>z;
        queries[i].push_back(x);
        queries[i].push_back(y);
        queries[i].push_back(z);
        
    }
    vector<vector<int>> arr(n);
    vector<int> ans;
    int lastAnswer=0;
    
    for(int i=0;i<q;i++) {
        if(queries[i][0]==1) {
            int idx=((queries[i][1])^lastAnswer)%n;
            arr[idx].push_back(queries[i][2]);
            
        }
        else if(queries[i][0]==2) {
            int idx=((queries[i][1])^lastAnswer)%n;
            lastAnswer= arr[idx][(queries[i][2])%arr[idx].size()];
            ans.push_back(lastAnswer);
        }
    }
   
    for(int i=0;i<(int) ans.size();i++) {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
