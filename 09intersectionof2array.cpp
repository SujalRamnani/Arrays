#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,1,2,3,4,5};int m=a.size();
    vector<int> b={2,3,4,4,5};int n=b.size();

    int i=0,j=0;
    vector<int> ans;
    while(i<m && j<n){
         if (a[i]==b[j]){
            ans.push_back(a[i]);
            i++;j++;
        }
       else  if (a[i]<b[j]) i++;
        else j++;
            
    }
    for(int x:ans) cout<<x<<" ";

    return 0;
}