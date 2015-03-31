// 211543957 TUT1  TOWER OF HANOI GAME
//including libraries
#include <iostream>  
#include <conio.h>			//to use _getch()

int count = 0;// declare as global variable

using namespace std;

//function prototypes
void tower(int, char, char, char);

//main programme
int main()
{
	//declare variables
	int n;

	//prompt user to chose the number of discs
	cout << "\n\t\t\t******TOWER OF HANOI GAME******" << endl << endl;
	cout << "\t\t\t   ENTER THE NUMBER OF DISCS :    ";
	cin >> n;

	cout << endl << endl;
	//call the sorting function
	tower(n, 'A', 'B', 'C');

	cout << endl << endl;
	//display the number of moves taken to sort the disks
	cout << " DISCS SORTED AFTER " << ::count << " MOVES" << endl;

	_getch();
	return 0;
}


//function that sorts out the discs in the fewest moves possible by the use of an algorithm
void tower(int a, char from, char aux, char to)
{
	if (a == 1){
		cout << "\t\tMove disc    1    from    " << from << "    to    " << to << "\n";
		::count = ::count + 1;
		return;
	}
	else{
		::count = ::count + 1;
		tower(a - 1, from, to, aux);
		cout << "\t\tMove disc    " << a << "    from    " << from << "    to    " << to << "\n";
		tower(a - 1, aux, from, to);
	}

}//end of function