// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
//     int n=arr.size();
//         int currSum=0;
//         int maxSum=INT_MIN;
//         for(int i=0;i<n;i++){
//             currSum+=arr[i];
//             maxSum=max(maxSum,currSum);
//             if (currSum<0) currSum=0;
//         }
//         cout<<maxSum;
//     return 0;
// }



////print max subarray
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    int n=arr.size();
        int currSum=0;
        int maxSum=INT_MIN;
        int start=0;
        int ansStart=-1,ansEnd=-1;
        for(int i=0;i<n;i++){
            if (currSum==0){
                  start=i;
            }
            currSum+=arr[i];
           if (currSum>maxSum){
            maxSum=currSum;
            ansStart=start;
            ansEnd=i;
           }
            if (currSum<0) currSum=0;
        }
        cout<<ansStart<<" "<<ansEnd;
    return 0;
}