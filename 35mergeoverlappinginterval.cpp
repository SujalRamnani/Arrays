#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,3},{2,6},{8,10},{15,18}};
      int n=arr.size();
        sort(arr.begin(),arr.end());
        
      stack<vector<int>> st;
      st.push(arr[0]);
      for(int i=1;i<n;i++){
        vector<int> top=st.top();
        if (arr[i][0]<=top[1]){ 
            st.pop();
        st.push({top[0],max(top[1],arr[i][1])});
        }
        else st.push(arr[i]);
      }

       vector<vector<int>> ans;
       while(st.size()!=0){
        ans.push_back(st.top());
        st.pop();
       }
       reverse(ans.begin(),ans.end());
      for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
      }
    return 0;
}