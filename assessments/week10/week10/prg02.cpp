#include <stdio.h>

int RowWithMaxOnes(int matrix[][100], int N) {
    int maxRow ;  
    int maxCount = 0; 
    int j = N - 1;    

   
    for (int i = 0; i < N; i++) {
        
        while (j >= 0 && matrix[i][j] == 1) {
            j--; 
        }
        
        int onesCount = N - j - 1; 
        if (onesCount > maxCount) {
            maxCount = onesCount; 
            maxRow = i;          
        }
    }

    return maxRow;  
}

int main() {
    int matrix[4][100] = {
        {0, 0, 0, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1}
    };

    int N = 4;  
    int result = RowWithMaxOnes(matrix, N); 

    printf("Row with the maximum number of 1s: %d\n", result);  

    return 0;  
}
