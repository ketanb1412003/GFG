#include<bits/stdc++.h>
using namespace std;
void sortCheck(vector<int>&arr){
    int len,a;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<int>distinct;
    set<int>compare;
        for(int i=0;i<len;i++){
        if(compare.find(arr[i])==compare.end()){
            distinct.push_back(arr[i]);
            compare.insert(arr[i]);
           }
}
    for(int i:distinct)
    cout<<i;
}
int main(){
    vector<int>v;
    sortCheck(v);
    return 0;
}