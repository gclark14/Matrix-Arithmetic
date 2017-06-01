#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    const int r1 = 2;
    const int c1 = 3;
    const int r2 = 3; const int c2 = 2;
    int array2[r2][c2];
    int array[r1][c1];
    int brick;
    int counter = 0;
    
    for (int h = 0; h < r1; ++h)
    {
        for (int w = 0; w < c1; ++w)
        {    
          //counter++; 
          array[h][w] = 0;
        }
    }
    for (int h = 0; h < r1; ++h)
    {
        for (int w = 0; w < c1; ++w)
        {    
          //counter++; 
          array2[h][w] = 0;
        }
    }
    
    for (int h = 0; h < r1; ++h)
    {
        for (int w = 0; w < c1; ++w)
        {    
          cout << "Array 1 " << h << " " << w << endl; 
          cin >> array[h][w];
        }
    }
    
    
    counter = 0;
    for (int h = 0; h < r2; ++h)
    {
        for (int w = 0; w < c2; ++w)
        {    
          cout << "Array 2 " << h << " " << w << endl; 
          cin >> array2[h][w];
        }
    }
    
    
    int product[r1][c2];
    for (int h = 0; h < r1; ++h)
    {
        for (int w = 0; w < c2; ++w)
        {    
          //counter++; 
          product[h][w] = 0;
        }
    }
    for (int h = 0; h < r1; ++h)
    {
      for (int w = 0; w < c2; ++w)
      {    
        for (int v = 0; v < r2; ++v)
        {
          product[h][w] += array[h][v] * array2[v][w];
        }
      }
    }
    
    for (int h = 0; h < r1; ++h)
    {
        for (int w = 0; w < c2; ++w)
        {    
            cout << "product [" << h << "][" << w << "] = ";
            cout << product[h][w] << endl;
        }
    }
    return 0;
}
