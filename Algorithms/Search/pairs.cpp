#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    map<int,int> m;
    for(auto x:arr) {
        m[x]++;
    }
    int count=0;
    for(auto x:arr) {
        if(m.count(x+k)) {
            count++;
        }
    }
    cout<<count;
    return 0;
}
