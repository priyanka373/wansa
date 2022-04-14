#include<iostream>
#include<vector>
// #include<stdio.h>
using namespace std;
int main(){
    int n,x;
    vector<int> v;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
        // cout<<"hellp";

    }
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    return 0;
}