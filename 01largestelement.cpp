#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,2,1,5,2};
    int n=arr.size();
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if (maxi<arr[i]) maxi=arr[i];
    }
    cout<<maxi;
    return 0;
}