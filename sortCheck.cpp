#include<bits/stdc++.h>
using namespace std;
bool sortCheck(vector<int>&arr){
    int len,a;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
        for(int i=1;i<len;i++)
            if(arr[i-1]>arr[i])
               return false;
    return true;
        
}
int main(){
    vector<int>v;
    cout<<(sortCheck(v)?"Yes":"No");
    return 0;
}