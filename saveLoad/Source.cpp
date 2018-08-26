#include <iostream>
#include <string>
#include <fstream>


using namespace std;


struct inventory {
	int healthPotion = 20;
	string weapon;
	string boots;
};





int main() {

	inventory ofPlayer;
	ofPlayer.weapon = "basicsword";
	ofPlayer.boots = "blazeboots";



	char reply;

	cout << "your boots are called " << ofPlayer.boots << endl;
	cin >> reply;
	
	
	string fileName;
	cout << "what would you like to name your save file?:\n";
	cin >> fileName;
	fileName += ".txt";
	ofstream save(fileName);
	if (save.is_open()) {
		
		save << ofPlayer.boots << endl;
		save << ofPlayer.weapon << endl;
		save.close();
	}
	else {
		cout << "Unable to open file";
		cin >> reply;
	}


	ifstream load(fileName);
	if (load.is_open()) {
		string check;

		load >> ofPlayer.boots;
		load >> ofPlayer.weapon;

		cout << ofPlayer.boots << endl;
		cout << ofPlayer.weapon << endl;

		cout << "is this correct?\n";
		cin >> check;
		 
	}



	return 0;
}

	