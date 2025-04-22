#include<bits/stdc++.h>
using namespace std;
void secondLargest(vector<int> &arr){
    int len,a;
    cin>>len;
    if(len<2){
        cout<<"not enough elements";
    }
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    int first=arr[0];
    for(int i=1;i<len;i++){
            if(arr[i]!=first){
                cout<<"second largest is:"<<arr[i];
                return;
            }
    }
    cout<<"not found";
}
int main(){
    vector<int>v;
    secondLargest(v);
    return 0;
}