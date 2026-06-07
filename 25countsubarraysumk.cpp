#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,-3,1,1,4,2,-3};
    int n=arr.size();
    int count=0;int k=3;
    int sum=0;
    unordered_map<int,int> mp;
    mp[0]=1;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        int remaining=sum-k;
        if (mp.find(remaining)!=mp.end()){
            count+=mp[remaining];
        }
        mp[sum]++;
      
    }
    cout<<count;
    return 0;
}