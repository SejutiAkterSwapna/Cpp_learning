//Buy & Sell Stocks.    [ TC =O(n+n) =O(2n) =O(n) ]
#include <iostream>
using namespace std;
void maxProfit(int *prices, int n){
    int bestBye[10000];
    bestBye[0] = INT_MAX; //Positive Infinity.

    for(int i=1; i<n; i++){
        bestBye[i] = min(bestBye[i-1], prices[i-1]);
    }
    int maxProfit = INT_MIN;
    for(int i=0; i<n; i++){
        int currProfit = prices[i] - bestBye[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout<<"Max Profit = "<< maxProfit<< endl;

}
int main(){
    int prices[]={7, 1, 5, 3, 6, 4};
    int n = sizeof(prices)/sizeof(int);

    maxProfit(prices,n);

    return 0;
}