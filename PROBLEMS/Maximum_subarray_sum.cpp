#include <iostream>
#include <climits>
using namespace std;

int main(){
    int A[]={-1,-2,-3,-4,-5,-6};
    int n=6;
    int maxsum= INT_MIN;
    int currsum=0;
    for (int i=0; i<n; i++){
        currsum+=A[i];
        maxsum= max(maxsum, currsum);
        if (currsum<0){
            currsum=0;
        }
    }
    cout<< maxsum;
    return 0;
}