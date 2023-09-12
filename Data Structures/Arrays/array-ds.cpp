#include <iostream>
#include <vector>
#include <algorithm>



using namespace std;


int main() {
    int size;
    cin>>size;
    vector<int> arr(size);
    for(int i=0;i<size;i++) {
        cin>>arr[i];
    }
    vector<int> arrs(size);
    int num=size-1;
    
    for(int i=num;i>=0;i--) {
        arrs[num-i]=arr[i];
    }
    
    for(int i=0;i<size;i++) {
        if(i==size-1) {
            cout<<arrs[i];
            break;
        }
        cout<<arrs[i]<<" ";
    }
    return 0;
}
