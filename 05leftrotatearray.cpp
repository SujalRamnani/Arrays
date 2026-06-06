#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr,int i,int j){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};int k=3;
    int n=arr.size();
    k=k%n;
    reverse(arr,0,n-k-1);
        reverse(arr,n-k,n-1);
        reverse(arr,0,n-1);

        for(int x:arr) cout<<x<<" ";
    return 0;
}