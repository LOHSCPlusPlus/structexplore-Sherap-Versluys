#include <iostream>
using namespace std;

// Put the person struct here
struct person {
    string firstName;
    string lastName;
    person();
    person(string first, string last);
};

person::person(){
  firstName = "unknown";
  lastName = "unknown";
}

person::person(string first, string last){
  firstName = first;
  lastName = last;
}

void Printperson(person person){
cout << "Person one's full name is " << person.firstName << " " << person.lastName << endl;
  }
int main() {
	// Create two instances of person here, and assign the names.
person a;
cout << "Person one's full name is " << a.firstName << " " << a.lastName << endl;

person b("Linus", "Van Pelt");
cout << "Person two's full name is " << b.firstName << " " << b.lastName << endl;
	
  
  
  
  // Add the prints here

//cout << "Enter a first and last name" << endl;
//cin >> a.firstName >> a.lastName;
 // cout << "Person one's full name is " << a.firstName << " " << a.lastName << endl;

  //cout << "Person two's full name is " << b.firstName << " " << b.lastName << endl;

	return 0;
}