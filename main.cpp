#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

bool win = false;

int main(void);
{
  bool bgold = false, bred = false, bpink = false, bpurple = false, bblue = false;
  int cpull = 0;
  int varrepeat = 0;

  //random generator for cases
  random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<>casewin(1, 10000);

  do {
     cout << "Case Simulator" << endl << endl;
     casewin = cpull;

	if (casewin = 


		
     cout  << "Skin rarity: " << 

    

       cout << "\n\nAnother Case? (Y)es/(N)o" << endl;
       varrepeat = _getch()
        system("cls")
       } while (varrepeat != 'n' && varrepeat != 'N');
  return 0;
}
