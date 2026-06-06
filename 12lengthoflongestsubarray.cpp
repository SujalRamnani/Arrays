// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,2,3,1,1,1,1,4,2,3};
//     int n=arr.size();
//     int k=3;
//     int currLen=INT_MIN;
//     for(int i=0;i<n;i++){
//         int sum=0;
//         for(int j=i;j<n;j++){
//             sum+=arr[j];
//             if (sum==k) currLen=max(currLen,j-i+1);
//         }
//     }
//     cout<<currLen;
    
//     return 0;
// }




////hashing
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,2,3,1,1,1,1,4,2,3};
//     int n=arr.size();
//     int k=3;
//     int maxLen=0;
//     int sum=0;
//     unordered_map<int,int> mp;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//         if (sum==k) maxLen=max(maxLen,i+1);
//         int remaining=sum-k;
//         if (mp.find(remaining)!=mp.end()){
//             int len=i-mp[remaining];
//             maxLen=max(maxLen,len);
//         }
//         if (mp.find(sum)==mp.end()) mp[sum]=i;

//     }
//     cout<<maxLen;

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    int n=arr.size();
    int k=3;
    int maxLen=0;
    int sum=0;
    int i=0,j=0;
    while(i<=j && j<n){
         sum+=arr[j];
        while (i<=j && sum>k){
            sum-=arr[i];
            i++;
        }
         
         if (j<n && sum==k) maxLen=max(maxLen,j-i+1);
      
      j++;

    }
    cout<<maxLen;
    return 0;
}