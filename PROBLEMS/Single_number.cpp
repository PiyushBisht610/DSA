#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v={8,5,7,8,5};
    int ans=0;
    for (int val : v){
        ans^= val;
    }
    cout<< ans;
    return 0;
}