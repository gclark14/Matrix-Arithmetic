
#include "hw04.h"

int subtract(){

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
    cout << "Matrices invalid. Cannot subtract \n";
    return 0; // This determines whether or not
  }
  // if an exception is found, program will still execute, 
  // however, the loop may or may not run.
  // With the reiteration of the cin, the program will only 
  // continue if the correct input format is entered.
  
  for (int width = 0; width < row1; ++width)
  {
    for (int height = 0; height < col1; ++height)
    {
      cout << "mOne[" << width << "][" << height << "]";
      cin >> mOne[width][height];
      if (cin.fail())
      {
        inReset();
        cin >> mOne[width][height];
      }
    }
  }
 
  cout << "\n\n";
  for (int width = 0; width < row2; ++width)
  {
    for (int height = 0; height < col2; ++height)
    {
      cout << "mTwo[" << width << "][" << height << "]";
      cin >> mTwo[width][height];
      if (cin.fail())
      {
        inReset();
        cin >> mTwo[width][height];
      }
    }
  }
  
  cout << "\n\n"; 
  
  // for the output i can make it be [ . . .] where the 
  // amount of spaces within the curly brackets is equal
  // to the mod by the dimension... Something like that. 
  int difference[row1][col1] = {0};
  for (int width = 0; width < row2; ++width)
  {
    for (int height = 0; height < col2; ++height)
    {
      difference[width][height] += mOne[width][height] - 
      mTwo[width][height];
    }
  }

  for (int width = 0; width < row2; ++width)
  {
    for (int height = 0; height < col2; ++height)
    {
      cout << "Difference[" << width << "][" << height << "]" << " = " << difference[width][height] << '\n';
    }
  }
  cout << "\n\n";
return 0;
}
