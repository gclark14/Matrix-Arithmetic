//#include "hw04.h" 

// gonna scrap this for the time being, but i understand how it works now.
// it counts the number of spaces and those spaces become the range of 
// the array. Create the array then populate then manipulate.

void sToDub(){
  string line;
  int rows;
  int cols;
  cout << "How many rows would you like?\n";
  cin >> rows;
  cin.clear();
  //cin.ignore();
  cout << "Enter your values separated by spaces\n\n";
  int count = 1; 
  bool a = true;
  for (int n = 0; n <= rows; ++n)
  {
    cout << "Row " << n << ":\n";
    a = true;
    while (getline (cin, line))
    {
      for (int i = 0; i < line.length(); ++i)
      {
        if (isspace(line.at(i))) ++count;
      } 
    }
    cin.clear();
    cin.ignore();
    
  }
  cout << "cout << line " << line << '\n';
}
