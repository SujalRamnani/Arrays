// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> arr={2,3,-2,4};
//     int n=arr.size();
//     int maxProduct=INT_MIN;
//     for(int i=0;i<n;i++){
//         int pro=1;
//         for(int j=i;j<n;j++){
//             pro*=arr[j];
//             maxProduct=max(maxProduct,pro);
//         }
//     }
//     cout<<maxProduct;
//     return 0;
// }


////optimal
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={2,3,-2,4};
     int n=arr.size();
     int prefix=1;int prefixMAX=INT_MIN;
int suffix=1;int suffixMAX=INT_MIN;
for(int i=0;i<n;i++){
    if (prefix==0) prefix=1; //restart from 1 again make it 1
    prefix*=arr[i];
    prefixMAX=max(prefixMAX,prefix);
}

for(int i=n-1;i>=0;i--){
     if (suffix==0) suffix=1; //restart from 1 again make it 1
    suffix*=arr[i];
     suffixMAX=max(suffixMAX,suffix);
}
int ans=max(prefixMAX,suffixMAX);
cout<< ans;



    return 0;
}