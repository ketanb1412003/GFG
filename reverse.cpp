#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&arr){
    int len,a;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
   for(int i=len-1;i>=0;i--){
        arr.push_back(arr[i]);
   }
   for(int r:arr)
   cout<<r<<endl;
}
int main(){
    vector<int>v;
    reverse(v);
    return 0;
}