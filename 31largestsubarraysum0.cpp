// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={15, -2, 2, -8, 1, 7, 10, 23};
//     int n=arr.size();
//         int maxLen=0;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){
//                 sum+=arr[j];
//                 if (sum==0) maxLen=max(maxLen,j-i+1);
//             }
//         }
//         cout<< maxLen;
//     return 0;
// }



///better approach hashing
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={15, -2, 2, -8, 1, 7, 10, 23};
     int n=arr.size();
    
      int sum=0;int maxLen=0;
      unordered_map<int,int> mp;
        ///maan lo x sum hua aur ye x sum agar repeat hua kabhi matlab bich 
        //ke elements ka sum zero hai
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if (sum==0) maxLen=max(maxLen,i+1);
           else if (mp.find(sum)!=mp.end()){
               int len=i-mp[sum];
               maxLen=max(maxLen,len);
           }
          else mp[sum]=i;
            
        }
        cout<<maxLen;
    return 0;
}