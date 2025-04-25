#include<bits/stdc++.h>
using namespace std;
void subArrays(vector<int>&arr){
    int len,a;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        arr.push_back(a);
    }
    vector<int>subarray;
   for(int i=0;i<len;i++){
     
       for(int j=i;j<len;j++){
           for(int k=i;k<=j;k++){
                 subarray.push_back(arr[k]);
           }
          subarray.push_back(-1);  //indicate that current subarray is finished
       }
   }
   for(int sub:subarray)
   if(sub==-1)
   cout<<endl;
    else
    cout<<sub<<endl;
}
int main(){
    vector<int>v;
    subArrays(v);
    return 0;
}