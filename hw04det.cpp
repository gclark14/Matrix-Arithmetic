#include "hw04.h"

  int det()
  {
    int row, col;
    int determinant;
    cout << "Array 1 Row: ";
    cin >> row;
    cout << "Array 1 Col: ";
    cin >> col; 
  
    int det[row][col];
    if(row == col)
    {
    for (int h = 0; h < row; h++)
    {
        for (int w = 0; w < col; w++)
        {
            cout << "det[" << h << "][" << w << "]";
            cin >> det[h][w];
        }
    }
    if (row == 3)
    {
        determinant = det[0][0] * (det[1][1] * det[2][2] - det[1][2]*det[2][1])
                - (det[1][0] * det[2][2] - det[1][2]*det[2][0]) +
                (det[1][0] * det[2][1] - det[1][1]*det[2][0]);
    }
    else if (row == 2)
    {
        determinant = (det[0][0] * det[1][1]) - (det[1][0] * det[0][1]);
    }
        cout << "Determinant = " << determinant << endl;
    } else {
        cout << "Matrix invalid, cannot find the determinant\n";
    }
    cout << "\n\n";    
    return 0;
}

