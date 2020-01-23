#include <iostream>
using namespace std;

int main() {
	string firstName;
	string lastName;
	int birthYear;
	int heightFeet;
	int heightInches;
	int userAge;
	double convertedFeet;
	double convertedInches;
	double convertedHeight;
	double annualGrowth;


	cout << "First name: ";
	cin >> firstName;
	cout << "Last name: ";
	cin >> lastName;
	cout << "Birth year: ";
	cin >> birthYear;
	cout << "Height in feet (do not include inches): ";
	cin >> heightFeet;
	cout << "Height in inches (do not include feet): ";
	cin >> heightInches;
	cout << endl;

	cout << "Hello " << firstName << " " << lastName << "." << endl;
	userAge = 2019 - birthYear;
	cout << "You are " << userAge << " years old in 2019." << endl;
	convertedFeet = heightFeet * 30.48;
	convertedInches = heightInches * 2.54;
	convertedHeight = convertedFeet + convertedInches;
	cout << "Your height is " << convertedHeight << " cm." << endl;
	annualGrowth = (convertedHeight - 51) / userAge;
	cout << "You grew an average of " << annualGrowth << " cm per year (assuming you were 51 cm at birth).";

}
