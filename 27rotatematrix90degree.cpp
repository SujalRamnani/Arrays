#include<bits/stdc++.h>
using namespace std;
int main(){
      vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int m=arr.size();
    int n=arr[0].size();

    ///pehle transpose lelo
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    ///abb reverse kardo each row ko 
    for(int i=0;i<n;i++){
        int a=0,b=n-1;
        while(a<b){
            int temp=arr[i][a];
            arr[i][a]=arr[i][b];
            arr[i][b]=temp;
            a++;
            b--;
        }
    }


    ///abb print kardo
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}