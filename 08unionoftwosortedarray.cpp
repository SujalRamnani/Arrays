// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> a={1,1,2,3,4,5};int m=a.size();
//     vector<int> b={2,3,4,4,5};int n=b.size();

//     int i=0,j=0;
//     vector<int> ans;
//     while(i<m && j<n){
//         if (a[i]<=b[j]){
//             if (ans.size()==0 || ans.back()!=a[i]){
//                 ans.push_back(a[i]);
//             }
//             i++;
//         }
//         else{
//             if (ans.size()==0 || ans.back()!=b[j]){
//                 ans.push_back(b[j]);
//             }
//             j++;
//         }
//     }


//     if (i==m){
//         while(j<n){
//             if (ans.size()==0 || ans.back()!=b[j]) ans.push_back(b[j]);
//             j++;
//         }
//     }

//     if (j==n){
//         while(i<m){
//             if (ans.size()==0 || ans.back()!=a[i]) ans.push_back(a[i]);
//             i++;
//         }
//     }

//     for(int x:ans) cout<<x<<" ";
//     return 0;
// }

///union matlab sara element ek baar////


#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> a={1,1,2,3,4,5};int m=a.size();
     vector<int> b={2,3,4,4,5};int n=b.size();
     set<int> st;
     for(int i=0;i<m;i++) st.insert(a[i]);
     for(int i=0;i<n;i++) st.insert(b[i]);

     for(auto it:st) cout<<it<<" ";

    return 0;
}
