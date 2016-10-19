#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <int> employees(10);
  for (int i = 0; i < employees.size(); ++i) {
    employees[i] = i;
  }

  for (int i = 0; i < employees.size(); ++i) {
    cout << employees[i] << endl;
  }

//  cout << "employees.begin()\t" << employees.begin() << endl;
//  cout << "employees.end()\t" << employees.end() << endl;
  cout << "employees.size()\t" << employees.size() << endl;

  return 0;
} 

