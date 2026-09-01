#include <iostream>
#include <algorithm>
using namespace std;

int LCS(string a, string b) {
    int dp[100][100] = {};
    for(int i=1;i<=a.size();i++)
        for(int j=1;j<=b.size();j++)
            dp[i][j] = a[i-1]==b[j-1] ?
            dp[i-1][j-1]+1 :
            max(dp[i-1][j],dp[i][j-1]);

    return dp[a.size()][b.size()];
}

int main() {
    cout << LCS("Preparation","Pera") << endl;
    cout << LCS("AGGTAB","GXTXAYB") << endl;
}