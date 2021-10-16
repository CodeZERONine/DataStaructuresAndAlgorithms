//
// Created by Akshansh Gusain on 27/05/21.
//
#include<stdc++.h>

using namespace std;
int dp[100][100];

int matrixChain(int *arr, int i, int j) {
    if (i == j) {
        return 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    dp[i][j] = INT_MAX;
    for (int k = i; k < j; k++) {
        dp[i][j] = min(dp[i][j], matrixChain(arr, i, k)
                                 + matrixChain(arr, k + 1, j)
                                 + arr[i - 1] * arr[k] * arr[j]);
    }
    return dp[i][j];
}

int MatrixChainOrder(int *p, int n) {
    int i = 1, j = n - 1;
    return matrixChain(p, i, j);
}


int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    memset(dp, -1, sizeof dp);

    cout << "Minimum number of multiplications is "
         << MatrixChainOrder(arr, n);
}
