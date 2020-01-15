#include <iostream>
using namespace std;

int main ()
{
  int i;
  cout << "Please enter an integer value:";
  cin >> i;
  string mystr;
  cout << "What is your favorite color?";
  cin  >> mystr;
  float y;
  cout << " What is your favorite number?";
  cin >> y;

  for (int z=1;  z <=i;  z++ ) {
      
      //print out statement
      cout << z << " " << " " << mystr << " " << y <<endl;
  }

  return 0;
}