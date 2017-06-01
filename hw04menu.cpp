// doMenu - a function that does menus
// basically, this is main, this holds everything
// #encapsulation
#include "hw04.h"

int menu()
{
    prHdr();
    int choice;
    bool a = true;
    while (a == true)
    {
      cout << "1. Addition\n";
      cout << "2. Subtraction\n";
      cout << "3. Multiplication\n";
      cout << "4. Determinant\n";
      cout << "5. Exit\n";
      cout << "Choose operation:\n";
      cin >> choice;
     
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
        det();
        break;
        
        case 5:
        cin.eof();        
        break;
      }  
      cout << "If you would like to exit the program "  
      << "type ctrl-c\n";
      cout << "\n\n";
  }
  return 0;    
}
