#include<bits/stdc++.h>
using namespace std;
int main(){
    int numRows=5;
      vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++){
            ans[i]=vector<int> (i+1,1);
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}