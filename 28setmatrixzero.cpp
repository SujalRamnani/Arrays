// #include<bits/stdc++.h>
// using namespace std;
// void markRow(int i,vector<vector<int>> &arr){
//     for(int j=0;j<arr[0].size();j++){
//         if (arr[i][j]!=0) arr[i][j]=-1;
//     }
// }
// void markColumn(int j,vector<vector<int>> &arr){
//     for(int i=0;i<arr.size();i++){
//         if (arr[i][j]!=0) arr[i][j]=-1;
//     }
// }
// int main(){
//     vector<vector<int>> arr={{1,1,1},{1,0,1},{1,1,1}};
//     int m=arr.size();
//     int n=arr[0].size();
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if (arr[i][j]==0){
//                 markRow(i,arr);
//                 markColumn(j,arr);
//             }
//         }
//     }

//     ///traverse karo array pe jo bhi zero nhi hai usko zero kardo
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             if (arr[i][j]==-1){
//                 arr[i][j]=0;
//             }
//         }
//     }
//     ///abb print kardo
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
//     return 0;
// }



//better 
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,1,1},{1,0,1},{1,1,1}};
    int m=arr.size();
    int n=arr[0].size();
     vector<int> markRow(m,0);
        vector<int> markColumn(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (arr[i][j]==0){
                    //agar element zero hua toh uski row aur column for zero se mark kardo
                    markRow[i]=1;
                    markColumn[j]=1;
                }
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if (markRow[i] || markColumn[j]) arr[i][j]=0;
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}