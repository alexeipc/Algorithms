/**
 * The program finds the length of the Longest subsequence (may not be
 * continuous) such that the subsequence is in increasing order
 */
#include <bits/stdc++.h>
using namespace std;

int findLongestIncSubLength(int arr[],int length) {
    int dp[length];
    int i, j, maxx = 0;

    // Initialize Longest Increasing Subsequence values
    for (i = 0; i < length; i++) {
        dp[i] = 1;			
    }
    
    for (i = 1; i < length; i++) {
        for (j = 0; j < i; j++) {
            if (arr[i] > arr[j] && dp[i] < dp[j] + 1) {
                dp[i] = dp[j] + 1;	
            }				
        }
        maxx = max(maxx, dp[i]);
    }
    return maxx;
}

int main() {
    int arr[] = { 1, 4, 2, 10, 8 };
    int lisLength = findLongestIncSubLength(arr,5);
    cout << "Longest Increasing Subsequence Length is : " << lisLength << endl;
    
}
