int knapsack(int m, vector<int>& weights, vector<int>& profits) {
    int n = weights.size();
    vector<vector<int>> DP(n+1, vector<int>(m+1, 0));

    for(int i = 1; i <= n; i++) {
        for(int w = 1; w <= m; w++) {
            if(weights[i-1] <= w) {
                // নিতে পারি: নাও অথবা নাও, যা বেশি লাভ দেয় সেটাই নাও
                DP[i][w] = max(DP[i-1][w], DP[i-1][w - weights[i-1]] + profits[i-1]);
            } else {
                // নিতে পারব না, আগের মানই রাখবো
                DP[i][w] = DP[i-1][w];
            }
        }
    }

    return DP[n][m];  // সর্বোচ্চ লাভ
}