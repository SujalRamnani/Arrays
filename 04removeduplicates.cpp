// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,1,2,2,2,3,3};
//     int n=arr.size();
//     set<int> st;
//     for(int i=0;i<n;i++) st.insert(arr[i]);
//     int indx=0;
//     for(auto it:st){
//         arr[indx]=it;
//         indx++;
//     }
//     cout<<indx;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,1,2,2,2,3,3};
    int n=arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if (arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<i+1;
    return 0;
}