#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5,5};
    int n=arr.size();
    int i=0,j=n-1;
    vector<int> ans;
    while(i<j){
        ans.push_back(arr[j]);
        j--;
        ans.push_back(arr[i]);
        i++;

    }
    if (i==j) ans.push_back(arr[i]);
    for(int x:ans) cout<<x<<" ";
    return 0;
}