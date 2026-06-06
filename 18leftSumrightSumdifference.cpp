#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={10,4,8,3};
    int n=arr.size();
    vector<int> leftSum(n); 
       leftSum[0]=0;
       for(int i=1;i<n;i++){
        leftSum[i]=arr[i-1]+leftSum[i-1];
       }
       vector<int> rightSum(n); 
       rightSum[n-1]=0;
       for(int i=n-2;i>=0;i--){
        rightSum[i]=arr[i+1]+rightSum[i+1];
       }

       vector<int> ans(n);
       for(int i=0;i<n;i++){
        ans[i]=abs(leftSum[i]-rightSum[i]);
       }
       for(int x:ans) cout<<x<<" ";
    return 0;
}