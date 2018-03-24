#include <iostream>
#include <math.h>
using namespace std;

int main() {
	//sets all the variables to be integers and declares them
	int x,width, height, length,fArea,vRoom,rLength,rWidth,paintPsm,roomSf,paintNeed;
	//here i set all the variables to 0 ready to be edited 
	width = 0;
	height = 0;
	length = 0;
	fArea = 0;
	vRoom = 0;
	rLength = 0;
	rWidth = 0;
	paintPsm = 0;
	roomSf = 0;
	paintNeed = 0;
	x = 0;
	//here i ask the user to enter all the values needed and store them into variables
	//allows users in put to be taken and stores them in the variable
	cout << "please enter width of your room in meters" << endl;
	cin >> width;
	while (1) {
		//if the cin is not what expected it will loop this if statement
		if (cin.fail())
		{
			//clears input
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input " << endl;
			cout << "please enter width of your room in meters" << endl;
			cin >> width;
		}
		else
			//breaks loop
			break;

	};
	cout << "now please enter the height of your room in meters"<<endl;
	cin >> height;
	while (1) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input" << endl;
			cout << "now please enter the height of your room in meters" << endl;
			cin >> height;
		}
		else
			break;
	}
	cout << "finally please enter the length of your room"<<endl;
	cin >> length;
	while (1) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input" << endl;
			cout << "finally please enter the length of your room" << endl;
			cin >> length;
		}
		else
			break;
	}
	cout << "please enter the paint per square meter" << endl;
	cin >> paintPsm;
	while (1) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input" << endl;
			cout << "please enter the paint per square meter" << endl;
			cin >> paintPsm;
		}
		else
			break;
	}
	//multiples to variables together and stores the sum in another 
	fArea = width * length;
	cout <<"The floor area of your room is"<<endl<<fArea << endl;
	vRoom = width * height*length;
	cout <<"volume of this room is"<<endl<<vRoom<<endl;
	rLength = height * length * 2;
	rWidth = width * height * 2;
	//adds the 2 variables together
	roomSf = rLength + rWidth;
	//divides the rooms sf by the paint per square meter
	paintNeed = roomSf / paintPsm;
	//rounds the amount of paint needed up
	paintNeed = ceil(paintNeed);
	cout << "the number paint buckets you need is"<<endl<<paintNeed<<endl;
	//makes it so window will stay open even after code has ended until user enteres key
	system("pause");
	return 0; 
}