#include "hw04.h"

int add(){

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
  
  if ((row1 != row2) && (col1 != col2))
  {
    cout << "Matrices invalid. Cannot add\n";    
    return 0; // This determines whether or not i can add
  }    
  for (int h = 0; h < row1; h++)
  {
    for (int w = 0; w < col1; w++)
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
  for (int h = 0; h < row2; h++)
  {
    for (int w = 0; w < col2; w++)
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
  
  // for the output i can make it be [ . . .] where the 
  // amount of spaces within the curly brackets is equal
  // to the mod by the dimension... Something like that. 
  int sum[row1][col1];
  
  for (int h = 0; h < row1; h++)
  {
    for (int w = 0; w < col1; w++)
    {
        sum[h][w] = 0;
    }
  }
       
  for (int h = 0; h < row2; h++)
  {
    for (int w = 0; w < col2; w++)
    {
      sum[h][w] += mOne[h][w] + mTwo[h][w];
    }
  }

  for (int h = 0; h < row2; h++)
  {
    for (int w = 0; w < col2; w++)
    {
      cout << "Sum[" << h << "][" << w << "]" << " = " << sum[h][w] << '\n';
    }
  }
  cout << "\n\n";
return 0;

}
