// Online C++ compiler to run C++ program online
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int>v;
    int len,a;
    cin>>len;
    for(int i=0;i<len;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cout<<v.at(len-1);
    return 0;
}