// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={3,0,1};
//     int n=arr.size();
//     int originalSum=(n*(n+1))/2;
//         int actualSum=0;
//         for(int i=0;i<n;i++){
//             actualSum+=arr[i];
//         }
//         cout<<originalSum-actualSum;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> arr={3,0,1};
     int n=arr.size();
      int xor1=0;
        for(int i=0;i<n;i++) xor1=xor1^arr[i];
        int xor2=0;
        for(int i=0;i<n;i++) xor2=xor2^(i+1);
        int ans=xor1^xor2;
        cout<<ans;
    return 0;
}