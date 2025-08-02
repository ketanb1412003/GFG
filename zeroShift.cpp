// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

void zeroShift(vector <int> &arr){
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            int temp = arr[i];
            for(int j=i; j<n; j++){
                if(arr[j] == arr[j+1])
                arr[j] = arr[j+1];
            }
            arr[n] = temp;
            }
    }
    for(auto i:arr)
    cout<<i;
}

int main(){
    vector <int> v;
    zeroShift(v);
    return 0;
}