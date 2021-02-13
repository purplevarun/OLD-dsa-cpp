import numpy
def spiralTraversal(matrix) -> list :
    rows = len(matrix)
    cols = len(matrix[0])
    result = []
    x = 0 # starting row index
    y = 0 # starting column index
    while x < rows and y < cols :
        # adding first row
        for i in range (y,cols) : result.append (matrix[x][i])
        x += 1

        # add last column
        for i in range (x,rows) : result.append (matrix[i][cols-1])
        cols -= 1

        # add last row 
        if x < rows : 
            for i in range (cols-1, y-1, -1) : result.append (matrix[rows-1][i])
            rows -= 1
        
        # add first column
        if y < cols :
            for i in range (rows-1, x-1, -1) : result.append (matrix[i][y])
            y += 1
    return result

matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
print (numpy.array(matrix))
print (spiralTraversal(matrix))
