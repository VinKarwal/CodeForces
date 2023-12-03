for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] - '0' == ans[j]) {
        count++;
        break;
      }
    }
  }