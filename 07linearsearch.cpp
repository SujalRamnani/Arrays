#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={34,56,78,90,101};
    int n=arr.size();
    int x=78;
    int check=1;
    for(int i=0;i<n;i++){
        if (arr[i]==x){
          check=0;
          break;
        }
    }
    if (check==1) cout<<"Not present";
    else cout<<"Yes present";
    return 0;
}