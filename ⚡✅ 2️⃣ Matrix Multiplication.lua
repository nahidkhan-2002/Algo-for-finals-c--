MatrixMultiply(A, B, M, P, N)
    // Initialize result matrix C with dimensions M x N
    for i from 0 to M-1
        for j from 0 to N-1
            C[i][j] = 0
            
    // Perform multiplication
    for i from 0 to M-1
        for j from 0 to N-1
            for k from 0 to P-1
                C[i][j] = C[i][j] + A[i][k] * B[k][j]

    return C
