#include<bits/stdc++.h>
using namespace std;
void topThreeDistinct(vector<int> &arr){
    int len,a;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    
    int previous=INT_MIN;
    int count=0;
    for(int i=0;i<len;i++){
            if(arr[i]!=previous){
                cout<<arr[i];
                previous=arr[i];
                count++;}
                if(count==3)
                break;
            }
    cout<<endl;
}
int main(){
    vector<int>v;
    topThreeDistinct(v);
    return 0;
}