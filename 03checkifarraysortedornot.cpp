#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,2,3,3,4};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        if (arr[i]>arr[i+1]) return false;
      
    }
    return true;
    
    return 0;
}