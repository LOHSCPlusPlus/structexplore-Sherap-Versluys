#include <iostream>
using namespace std;

// Put the person struct here
struct person {
    string firstName;
    string lastName;
    person();
};

person::person(){
  firstName = "Unknown";
  lastName = "Unknown";
}

int main() {
	// Create two instances of person here, and assign the names.
person a;
cout << "Person one's full name is " << a.firstName << " " << a.lastName << endl;

person b;
cout << "Person two's full name is " << b.firstName << " " << b.lastName << endl;
	// Add the prints here

cout << "Enter a first and last name" << endl;
cin >> a.firstName >> a.lastName;
  cout << "Person one's full name is " << a.firstName << " " << a.lastName << endl;
cout << "Enter another first and last name" << endl;
cin >> b.firstName >> b.lastName;
  cout << "Person two's full name is " << b.firstName << " " << b.lastName << endl;

	return 0;
}