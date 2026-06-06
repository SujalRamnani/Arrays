// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={2,6,5,8,11};
//     int n=arr.size();
//     int target=14;
//     // vector<pair<int,int>> ans;
//     vector<int> ans;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if (arr[i]+arr[j]==target){
//                 // ans.push_back({arr[i],arr[j]});
//                 ans.push_back(arr[i]);
//                 ans.push_back(arr[j]);
//             }
//         }
//     }
//     // for(auto x:ans) cout<<x.first<<" "<<x.second;
//     for(int x:ans) cout<<x<<" ";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      vector<int> arr={2,6,5,8,11};
//     int n=arr.size();
//     int target=14;vector<int> ans;
//     unordered_map<int,int> mp;
//     for(int i=0;i<n;i++){
//         int remaining=target-arr[i];
//         if (mp.find(remaining)!=mp.end()){
//             ans.push_back(arr[i]);
//             ans.push_back(remaining);
//         }
//         mp[arr[i]]=i;
//     }
//      for(int x:ans) cout<<x<<" ";
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr={2,6,5,8,11};
    int n=arr.size();
    int target=14;vector<int> ans;
    int i=0,j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
        if (sum>target) j--;
        else if (sum<target) i++;
        else{
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            break;
        }
    }
    for(int x:ans ) cout<<x<<" ";
    return 0;
}