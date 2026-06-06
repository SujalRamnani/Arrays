// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={10,22,12,3,0,6};
//     int n=arr.size();
//     vector<int> ans;
    
//     for(int i=0;i<n-1;i++){
//         bool leader=true;
//         for(int j=i+1;j<n;j++){
//             if (arr[j]>arr[i]) {
//                 leader=false;
//                 break;
//             }
//         }
//         if (leader==true) ans.push_back(arr[i]);
//     }
//     ///last element is always a leader uske baad kuch nhi hai so
//     ans.push_back(arr[n-1]);
    
//     for(int x:ans) cout<<x<<" ";
//     return 0;
// }



///optimal 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={10,22,12,3,0,6};
    int n=arr.size();
    vector<int> ans;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if (arr[i]>maxi){
            ///current element agar bada hai right ke maximum se toh usko ans mein daaldo
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    sort(ans.begin(),ans.end());
    for(int x:ans) cout<<x<<" ";
    return 0;
}