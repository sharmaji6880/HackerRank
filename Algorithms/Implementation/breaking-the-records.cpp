#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int scores[n];
    for(int i=0;i<n;i++) {
        cin>>scores[i];
    }
    
    int minimum=scores[0],maximum=scores[0];
    int minCount=0,maxCount=0;
    
    for(int i=1;i<n;i++) {
        if(scores[i]>maximum) {
            maximum=scores[i];
            maxCount++;
        }
        if(scores[i]<minimum) {
            minimum=scores[i];
            minCount++;
        }
    }
    cout<<maxCount<<" "<<minCount;
    return 0;
}
