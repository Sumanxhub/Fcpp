#include <iostream>
using namespace std;
// declaration of class namaed "details"
class details {
public: // access specifier
  // data members
  string name;
  int age;
  string hobby;
  string goal;

public:
  // member functions
  void getDetails() {
    cout << "What is your name : ";
    getline(cin, name);
    cout << "What is your age : ";
    cin >> age;
    cin.ignore();
    cout << "What is your hobby : ";
    getline(cin, hobby);
    cout << "What is your goal : ";
    getline(cin, goal);
  }
  void showDetails() {
    cout << endl;
    cout << "Hello " << name << endl;
    cout << "Your age is " << age << " years" << endl;
    cout << "Your hobby is " << hobby << endl;
    cout << "Your goal is " << goal << endl;
  }
}; // class is terminated
   // main function
int main() {
  details call;
  call.getDetails();
  call.showDetails();
  cout << endl;
  return 0;
}
