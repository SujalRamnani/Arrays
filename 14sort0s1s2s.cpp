#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector<int> arr={2,0,2,1,1,0};
    // int n=arr.size();
    // sort(arr.begin(),arr.end());
    // for(int x:arr) cout<<x<<" ";

//    vector<int> arr={2,0,2,1,1,0};
//     int n=arr.size();
//     int noz=0;
//         int noo=0;
//         int nott=0;
//         for(int i=0;i<n;i++){
//             if (arr[i]==0) noz++;
//             else if (arr[i]==1) noo++;
//             else if (arr[i]==2) nott++;
//         }
//         for(int i=0;i<noz;i++) arr[i]=0;
//         for(int i=noz;i<noz+noo;i++) arr[i]=1;
//         for(int i=noz+noo;i<n;i++) arr[i]=2;
//         for(int x:arr) cout<<x<<" "; 


 vector<int> arr={2,0,2,1,1,0};
int n=arr.size();
        int mid=0;int low=0;int high=n-1;
        //sara operations mid pe
        while(mid<=high){
            if (arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;low++;
            }
            else if (arr[mid]==1) mid++;
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        for(int x:arr) cout<<x<<" "; 



    return 0;
}