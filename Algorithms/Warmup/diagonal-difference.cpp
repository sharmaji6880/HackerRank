#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>arr[i][j];
        }
    }
    
    int sum1=0;
    int sum2=0;
    for(int i=0;i<n;i++) {
        sum1+=arr[i][i];
    }
    int j=n-1;
    for(int i=0;i<n;i++) {
        sum2+=arr[i][j];
        j--;
    }
    
    int difference = sum1 - sum2;
    difference=difference>=0?difference:-difference;
    
    cout<<difference;
    return 0;
}
