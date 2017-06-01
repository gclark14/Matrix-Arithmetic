// doMenu - a function that does menus
// basically, this is main, this holds everything
// #encapsulation
#include "hw04.h"

int menu()
{
    int choice;
    
    cout << "Choose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Determinant\n";
    cout << "5. Exit\n";
    cin >> choice;
    
    while (choice != 5)
    {
      switch (choice)
      {
        case 1:
        add();
        break;
        
        case 2:
        subtract();
        break;
        
        case 3:
        mul();
        break;
        
        case 4:
        // Determinant();
        break;
        
        case 5:
        return 0;        
      }
    }
return 0;    
}