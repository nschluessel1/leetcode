class Solution:
    def updateMatrix(self, mat: list[list[int]]) -> list[list[int]]:
        m = len(mat)
        n = len(mat[0])
        DP = [[m+n] * n for _ in range(m)]
        for i in range(m):
            for j in range(n):
                if mat[i][j] == 0:
                    DP[i][j] = 0
                else:
                    if i > 0:
                        DP[i][j] = DP[i-1][j] + 1
                    if j > 0:
                        DP[i][j] = min(DP[i][j], DP[i][j-1] + 1)
        
        for i in range(m-1, -1, -1):
            for j in range(n-1, -1, -1):
                if  i < m - 1:
                    DP[i][j] = min(DP[i][j], DP[i+1][j] + 1)
                if j < n - 1:
                    DP[i][j] = min(DP[i][j], DP[i][j+1] + 1)
        return DP
