#include<bits/stdc++.h>
using namespace std;
void leader(vector<int>&arr){
    int a,len;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<int>leader;
   int maxRight=arr[len-1];
    leader.push_back(maxRight);
        for(int i=len-2;i>=0;i--){
            if(arr[i]>maxRight){
                maxRight=arr[i];
                leader.push_back(maxRight);
            }
    }
    for(int i:leader)
    cout<<i;
}
int main(){
    vector<int>v;
    leader(v);
    return 0;
}