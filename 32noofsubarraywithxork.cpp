#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={4, 2, 2, 6, 4};
    int n=arr.size();int k=6;
        
        int count=0;
        int xorr=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            xorr^=arr[i];
            int x=xorr^k;
            count+=mp[x];
            mp[xorr]++;
        }
        cout<< count;
    return 0;
}