#include "hw04.h"

int mul(){
  int row1, col1, row2, col2;
  cout << "Array 1 Row: ";
  cin >> row1;
  if (cin.fail())
  {
    inReset();
    cin >> row1;
  }
  cout << "Array 1 Col: ";
  cin >> col1; 
  if (cin.fail())
  {
    inReset();
    cin >> col1;
  }
  cout << "Array 2 Row: ";
  cin >> row2;
  if (cin.fail())
  {
    inReset();
    cin >> row2;
  }
  cout << "Array 2 Col: ";
  cin >> col2; 
  if (cin.fail())
  {
    inReset();
    cin >> col2;
  }
  cout << "\n\n";
          
  int mOne[row1][col1];
  int mTwo[row2][col2];
  
  // if width1 = height2
  if (col1 == row2){ 
    // we have moved into algo territory.  
    for (int h = 0; h < row1; ++h)
    {
      for (int w = 0; w < col1; ++w)
      {
        cout << "mOne[" << h << "][" << w << "]";
        cin >> mOne[h][w];
        if (cin.fail())
        {
          inReset();
          cin >> mOne[h][w];
        } 
      }
    }
    
    cout << "\n\n";
   
    for (int h = 0; h < row2; ++h)
    {
      for (int w = 0; w < col2; ++w)
      {
        cout << "mTwo[" << h << "][" << w << "]";
        cin >> mTwo[h][w];
        if (cin.fail())
        {
          inReset();
          cin >> mTwo[h][w];
        }
      }
    }
    
    cout << "\n\n"; 
    // test loop
    
    int r = col1;
    int c = row2;      // and the dimensions are in fact correct. 
    int product[r][c]; // create a product array = of new dimensions
   
    for (int h = 0; h < r; ++h)
    {
      for (int w  = 0; w < c; ++w)
      {
        product[h][w] = 0;
      }
    }

    // row is height 
    int sum = 0;
    for (int h = 0; h < row1; ++h)
    {
      for (int w = 0; w < col2; ++w)
      {
        for (int n = 0; n < row2; n++)
        {
          product[h][w] += mOne[h][n] * mTwo[n][w];  
        }
      cout << '\n';
      }
    }
    
    //output loop
    for (int h = 0; h < row1; h++)
    {
      for (int w  = 0; w < col2; w++)
      {
        cout << "product[" << h << "][" << w << "]" << product[h][w] << '\n';
      }
    }
  } else {
    cout << "Matrices invalid. Cannot Multiply\n";
    return 0; 
  } 
  cout << "\n\n";
return 0;
}
