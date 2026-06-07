// #include<bits/stdc++.h>
// using namespace std;
// bool linearsearch(vector<int> &arr,int x){
//     for(int i=0;i<arr.size();i++){
//         if (arr[i]==x) return true;
//     }
//     return false;
// }
// int main(){
//     vector<int> arr={102,4,100,1,101,3,2,1,1};
//     int n=arr.size();
//     int longest=0;
//     for(int i=0;i<n;i++){
//         int x=arr[i];
//         int count=1;
//         while(linearsearch(arr,x+1)==true){
//             x++;
//             count++;
//         }
//         longest=max(longest,count);
//     }
//     cout<<longest;
//     return 0;
// }



///better
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,1,1,2,2,2,3,3,4,100,100,101,101,102};
//     int n=arr.size();
//     int cntCurr=0;
//     int longest=0;
//     int lastSmaller=INT_MIN;
//     for(int i=0;i<n;i++){
//         if (arr[i]-1==lastSmaller){
//             cntCurr++;
//             lastSmaller=arr[i];
//         }
//         else if (arr[i]==lastSmaller) continue;   ///1 1 1 1 1 1 
//         else if (arr[i]!=lastSmaller){  //// 100 uske pehle 4 
//             ///i will start the new sequence
//             cntCurr=1;
//             lastSmaller=arr[i];
//         }
//         longest=max(longest,cntCurr);
//     }
//     cout<<longest;

//     return 0;
// }



//optimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={102,4,100,1,101,3,2,1,1};
    int n=arr.size();
    unordered_set<int> st;
    for(int i=0;i<n;i++) st.insert(arr[i]);
   
    int longest=1;
    

    for(auto it:st){
        if (st.find(it-1)==st.end()){
            ///current element ke pehle wala banda agar nhi hai toh this can be my new start
            int start=1;
            int count=1;
            while(st.find(start+1)!=st.end()){
                start++;
                count++;
            }
            longest=max(longest,count);
        }
        
    }
    cout<<longest;
    return 0;
}