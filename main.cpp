#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

int main(void);
{
  bool bgold = false, bred = false, bpink = false, bpurple = false, bblue = false;
  int cpull = 0;
  int varrepeat = 0;

  //Random generator for cases
  random_device rd;
	mt19937 generator(rd());
	uniform_int_distribution<>casewin(1, 10000);

//Start of the loop
  do {
     cout << "Case Simulator" << endl << endl;
     casewin = cpull;
//Chooses which number between 1 and 10000 is chosen
	if (casewin = 


//Displays what rarity the pulled skin is
     cout  << "Skin rarity: " << 

    
//Asks the user if he wants to open another one
       cout << "\n\nAnother Case? (Y)es/(N)o" << endl;
       varrepeat = _getch()
        system("cls")
       } while (varrepeat != 'n' && varrepeat != 'N');
  return 0;
}
