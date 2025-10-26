int maximumEnergy(int energy[], int n, int k) {
    int dp[n];
    int max = -1000000000; // initialize to very small number

    // compute dp[] from end to start
    for (int i = n - 1; i >= 0; i--) {
        if (i + k < n)
            dp[i] = energy[i] + dp[i + k];
        else
            dp[i] = energy[i];
        
        if (dp[i] > max)
            max = dp[i];
    }

    return max;
}
