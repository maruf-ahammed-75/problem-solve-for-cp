    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            prefixSum[i][j] = prefixSum[i-1][j] + prefixSum[i][j-1] 
                              - prefixSum[i-1][j-1] + grid[i-1][j-1];
        }
    }
    cin>>x1>>y1>>x2>>y2;
    cout<<prefixSum[x2][y2] + prefixSum[x1-1][y1-1] - prefixSum[x1-1][y2] - prefixSum[x2][y1-1]<<endl;