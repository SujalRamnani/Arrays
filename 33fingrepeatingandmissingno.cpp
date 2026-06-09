#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr={{9,1,7},{8,9,2},{3,4,6}};
    int m=arr.size();
    int n=arr[0].size();
    vector<int> ans(2);
    int N=n*n;
    int actualSum=(N*(N+1))/2;    ///grid ka sum hota hai (nsquare*(nsquare+1))/2
    int currSum=0;
    unordered_map<int,int> mp;
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        currSum+=arr[i][j];
        mp[arr[i][j]]++;
    }
    }
    int repeat;
    for(auto it:mp){
        if (it.second==2) repeat=it.first;
    }

    int missing=actualSum-currSum+repeat;
    ans[0]=repeat;
    ans[1]=missing;

    for(int x:ans) cout<<x<<" ";
    return 0;
}