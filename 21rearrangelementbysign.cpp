// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     /////equal positive and equal negatives//////
//     vector<int> arr={3,1,-2,-5,2,-4};
//     int n=arr.size();
//      vector<int> pos;
//         vector<int> neg;
//         for(int i=0;i<n;i++){
//             if (arr[i]>0){
//                 pos.push_back(arr[i]);
//             }
//             else if (arr[i]<0) neg.push_back(arr[i]);
//         }

//          vector<int> ans;
//         int i=0;int j=0;
//         while(i<pos.size() && j<neg.size()){
//           ans.push_back(pos[i]);
//           i++;

//           ans.push_back(neg[j]);
//           j++;

//         }
//         for(int x:ans) cout<<x<<" ";
//     return 0;
// }





//////positves and negatives are not equal
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={-5,-2,5,2,4,7,1,8,-8};
    int n=arr.size();
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if (arr[i]>0) pos.push_back(arr[i]);
        else if (arr[i]<0) neg.push_back(arr[i]);
    }

    int i=0,j=0;
    bool startPositive=arr[0]>0;
    vector<int> ans;
    while(i<pos.size() && j<neg.size()){
       if (startPositive==true){ ///array ka 1st element is positive///
        ans.push_back(pos[i]);
        i++;

        ans.push_back(neg[j]);
        j++;
       }
       else{ ///array ka 1st element is negative///
        ans.push_back(neg[j]);
        j++;

        ans.push_back(pos[i]);
        i++;
       }


    }

    if (j==neg.size()){
        while(i<pos.size()){
           ans.push_back(pos[i]);
        i++; 
        }
    }


    if (i==pos.size()){
        while(j<neg.size()){
            ans.push_back(neg[j]);
            j++;
        }
    }

    for(int x:ans) cout<<x<<" ";
    return 0;
}