#include <iostream>
#include <vector>
using namespace std;

int single_num(vector <int> &v){
    int ans=0;
    for (int val : v){
        ans^= val;
    }
    return ans;
}

int main(){
    vector <int> v={8,5,7,8,5};
    cout<< single_num(v);
    return 0;
}