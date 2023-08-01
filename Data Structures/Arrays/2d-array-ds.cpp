#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6][6];
    for(int i=0;i<6;i++) {
        for(int j=0;j<6;j++) {
            cin>>arr[i][j];
        }
    }
    vector<int> sums;
    for(int i=0;i<=3;i++) {
        for(int j=0;j<=3;j++) {
            sums.push_back(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]+arr[i+1][j+1]);
        }
    }
    
    int Max=-45;
    for(int i=0;i<sums.size();i++) {
        if(sums[i]>Max) {
            Max=sums[i];
        }
    }
    cout<<Max;
    return 0;
}
