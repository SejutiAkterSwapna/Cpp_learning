//Max Subarray Sum->(Kadane's Algorithm DP)     [ TC = O(n) ]
#include <iostream>
using namespace std;
void maxSubArraySum(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i=0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout<<"Maximum Subarray Sum is = "<<maxSum<<endl;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArraySum(arr,n);

    return 0;
}