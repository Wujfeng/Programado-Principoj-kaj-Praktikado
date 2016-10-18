#include <iostream>
#include <string>

using namespace std;

int main() {
  string firstname = "Чичиков";
  string surname = "Гоголь";
  if (firstname != surname) cout << "Привет, друзья!" << endl;
  string name = firstname + surname;
  cout << name << endl;
  return 0;
}  
