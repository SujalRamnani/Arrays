// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={1,2,3};
//     // next_permutation(arr.begin(),arr.end());
//     // for(int x:arr) cout<<x<<" ";

//     do{
//         for(int x:arr) cout<<x;
//         cout<<endl;
//     }while(next_permutation(arr.begin(),arr.end()));
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,2,7,4,3,1};
    int n=arr.size();
    int indx=-1;
    for(int i=n-2;i>=0;i--){
        if (arr[i]<arr[i+1]){
            indx=i;
            break;
        }
    }

    for(int i=n-1;i>indx;i--){
        if (arr[i]>arr[indx]){
            swap(arr[i],arr[indx]);
            break;
        }
    }
    reverse(arr.begin()+indx+1,arr.end());
    for(int x:arr) cout<<x;

    return 0;
}

