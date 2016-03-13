// Author: Четан Ананд (verdastelo) 
// Description: Debug a program that finds the highest, lowest and average temperature from a data set. 
// Task 1: Get the program to run. DONE
// Task 2: The program created in Task 1 breaks if there are only negative or positive  values in data. Debug it. DONE 

#include "std_lib_facilities.h" 
using namespace std; 

int main() 
{
  vector <double> temps; 
  
  double temp = 0;
  double sum = 0; 
  double high_temp = -274; // The lowest possible temperature is zero Kelvin or -273 degrees Celsius. 
  double low_temp = 1000000; // The temperature at the sun's core is probably a million degrees Celsius. 
  int number_of_temp = 0;

  cout << "Пишите температуры по Цельсию: " ; 

  while (cin >> temp)
      temps.push_back (temp); 

  // Объяснит ошибку. 
  number_of_temp = temps.size(); 
  if (!number_of_temp) error ("Эта ошибка! Програм не нашёл ничего."); 

  for (int i = 0; i < temps.size(); ++i) {
      if (temps[i] > high_temp) high_temp = temps[i];
      if (temps[i] < low_temp) low_temp = temps[i]; 
      sum += temps[i]; 
  }

  cout << "Высокая температура: " << high_temp << " по Цельсию" << endl; 
  cout << "Нижняя температура: " << low_temp << " по Цельсию" <<  endl; 
  cout << "Средняя температура: " << sum/temps.size() << " по Цельсию" <<  endl; 

  return 0;
}
