#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n=prices.size();
        // //consider everyday as a selling day//
        // //1st day kuch liya hee nhi toh sell kaise hoga//
        // int bestBuy=prices[0];
        // int maxProfit=0;

        // for(int i=0;i<n;i++){
        //     if (prices[i]>bestBuy){
        //         //tabhi profit hoga//
        //         int profit=prices[i]-bestBuy;
        //         maxProfit=max(maxProfit,profit);
        //     }
        //     bestBuy=min(bestBuy,prices[i]);   
        // }
        // return maxProfit;
        
      vector<int> prices={7,1,5,3,6,4};
       int n=prices.size();
        int bestBuy=prices[0];int maxProfit=0;
        for(int i=1;i<n;i++){
            if (prices[i]>bestBuy){
                ///current price agar bestBuy se jyda hai tabhi profit hoga
                int profit=prices[i]-bestBuy;
                maxProfit=max(maxProfit,profit);
            }
            bestBuy=min(prices[i],bestBuy);
        }
        cout<<maxProfit;

    return 0;
}