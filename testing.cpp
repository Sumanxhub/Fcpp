// Learning cpp
#include <iostream>
#include <string>
using namespace std;

string sayhello(string name) { return name; }
int main() {
  string name = sayhello("Suman");
  cout << "Hello " << name << endl;
}
