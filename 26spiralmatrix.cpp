#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int m=arr.size();
    int n=arr[0].size();
    int minr=0,maxr=m-1;
    int minc=0,maxc=n-1;
    vector<int> ans;
    while(minr<=maxr && minc<=maxc){
        for(int j=minc;j<=maxc;j++){
            ans.push_back(arr[minr][j]);
        }
        minr++;
        if (minr>maxr || minc>maxc) break;

        for(int i=minr;i<=maxr;i++){
            ans.push_back(arr[i][maxc]);
        }
        maxc--;
         if (minr>maxr || minc>maxc) break;

        for(int j=maxc;j>=minc;j--){
            ans.push_back(arr[maxr][j]);
        }
        maxr--;
        if (minr>maxr || minc>maxc) break;

        for(int i=maxr;i>=minr;i--){
            ans.push_back(arr[i][minc]);
        }
        minc++;
         if (minr>maxr || minc>maxc) break;
    }
    for(int x:ans) cout<<x<<" ";

    return 0;
}