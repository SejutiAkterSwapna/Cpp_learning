//Max Subarray Sum->(Brute Force Approach).    [ TC = O(n^3) ]
#include <iostream>
using namespace std;
void maxSubArraySum(int *arr, int n){
    int max = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sum = 0;
            for(int i=start; i<=end; i++){
                sum += arr[i];
                if(max < sum) //max(a,max(b, c)); ->short-cut
                max = sum;
            }
            cout<<sum<<", ";
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum is = "<<max<<endl;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubArraySum(arr,n);

    return 0;
}