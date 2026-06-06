#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={3,2,1,5,2};
    int n=arr.size();
    int maxi=arr[0];
    int smaxi=INT_MIN;

    for(int i=0;i<n;i++){
        if (maxi<arr[i]) {
            smaxi=maxi;
            maxi=arr[i];
        }
        else if (maxi!=arr[i] && smaxi<arr[i]) smaxi=arr[i];
    }
    cout<<smaxi<<endl;
    cout<<maxi;
    return 0;
}