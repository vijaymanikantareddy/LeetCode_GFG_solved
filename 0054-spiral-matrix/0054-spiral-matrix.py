class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        res = []
        top, down, left, right, di = 0, len(matrix)-1, 0, len(matrix[0])-1, 0
        while top <= down and left <= right:
            if di == 0:
                for i in range(left, right+1):
                    res.append(matrix[top][i])
                top += 1
            elif di == 1:
                for i in range(top, down+1):
                    res.append(matrix[i][right])
                right -= 1
            elif di == 2:
                for i in range(right, left-1, -1):
                    res.append(matrix[down][i])
                down -= 1
            else:
                for i in range(down, top-1, -1):
                    res.append(matrix[i][left])
                left += 1
            di += 1
            di = di%4
        return res