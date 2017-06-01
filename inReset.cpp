#include "hw04.h"
// inReset is a function to flush the input buffer. It simply makes it less
// of a pain in the ass to write out each time i want to flush.

void inReset(){
  cin.clear();
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cout << "Output failed, please enter expected input.\n";
}
