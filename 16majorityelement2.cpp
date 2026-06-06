#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,2,3};
    vector<int> ans;
     int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++) mp[arr[i]]++;
        for(auto it:mp){
            if (it.second>n/2) {
                ans.push_back(it.first);
            }
        }
        for(int x:ans) cout<<x;
      
    return 0;
}