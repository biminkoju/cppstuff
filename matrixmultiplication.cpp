#include <iostream>
// multiplies two matrices for you

int main()
{
    int rowA, columnArowB, columnB;
    std::cout << "multiplies two matrices\n";
    std::cout << "enter the order of matrix A\n";
    std::cout << "row:";
    std::cin >> rowA;
    std::cout << "column:";
    std::cin >> columnArowB;
    std::cout << "enter the order of matrix B\n";
    std::cout << "column:";
    std::cin >> columnB;
    int matA[rowA][columnArowB], matB[columnArowB][columnB];
    // take input
    std::cout << "in matrix A"
              << "\n";
    for (int i = 0; i < rowA; i++)
    {
        for (int j = 0; j < columnArowB; j++)
        {
            std::cout << "enter the number for " << i + 1 << "th row " << j + 1 << "th column:";
            std::cin >> matA[i][j];
        }
    };
    std::cout << "in matrix B"
              << "\n";
    for (int k = 0; k < columnArowB; k++)
    {
        for (int l = 0; l < columnB; l++)
        {
            std::cout << "enter the number for " << k + 1 << "th row " << l + 1 << "th column:";
            std::cin >> matB[k][l];
        }
    };
    std::cout << "the given matrix A is:"
              << "\n";
    for (int m = 0; m < rowA; m++)
    {
        for (int n = 0; n < columnArowB; n++)
        {
            std::cout << matA[m][n] << " ";
            (n + 1 == columnArowB) ? std::cout << "\n" : std::cout << " ";
        }
    };
    std::cout << "the given matrix B is:"
              << "\n";
    for (int o = 0; o < columnArowB; o++)
    {
        for (int p = 0; p < columnB; p++)
        {
            std::cout << matB[o][p] << " ";
            (p + 1 == columnB) ? std::cout << "\n" : std::cout << " ";
        }
    };

    // transpose the matrix B
    int transposMatB[columnB][columnArowB];
    for (int a = 0; a < columnB; a++)
    {
        for (int b = 0; b < columnArowB; b++)
        {
            transposMatB[a][b] = matB[b][a];
        };
    };
    std::cout << "the given transpose matrix B is:"
              << "\n";
    for (int c = 0; c < columnB; c++)
    {
        for (int d = 0; d < columnArowB; d++)
        {
            std::cout << transposMatB[c][d] << " ";
            (d + 1 == columnB) ? std::cout << "\n" : std::cout << " ";
        }
    };

    // matrix multiplication

    int productmat[rowA][columnB];
    for (int q = 0; q < rowA; q++)
    {
        for (int r = 0; r < columnB; r++)
        {
            productmat[q][r] = 0;
            for (int e = 0; e < columnArowB; e++)
            {
                productmat[q][r] += matA[q][e] * transposMatB[r][e];
            }
        };
    }

    // outputting the product matrix
    std::cout << "the given product matrix is:"
              << "\n";
    for (int s = 0; s < rowA; s++)
    {
        for (int t = 0; t < columnB; t++)
        {
            std::cout << productmat[s][t] << " ";
            (t + 1 == columnB) ? std::cout << "\n" : std::cout << " ";
        }
    };
};