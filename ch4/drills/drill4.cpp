#include <iostream> 

using namespace std; 

int main()
{
    cout << "Enter two numbers: " << endl;
    // sola diferenco inter drill4 kaj drill3 estas ke mi
    // anstataŭigis int-on per double 
    double i, j; 
    while (cin >> i >> j) {
        cout << i << ' ' << j << endl;
    // seo estas aldonita al drill1.cpp
    // por kalkuli larĝa kaj mallarĝa nombroj.     
    if (i < j) {
        cout << "The smaller value is " << i
             << " and the larger value is " << j << endl; 
        }
    else if (i > j) {
        cout << "The smaller value is " << j
             << " and the larger value is " << i << endl; 
         }
    // oni ne bezonas la teston if (i == j) ĉar
    // inter du nombroj eblas nur tri parencecoj
    // unu > du, unu < du kaj unu == du. 
    // ni jam testis por la unuaj du kondiĉoj
    // restas nur la tria. tial else sufiĉas. 
    else
        cout << "The numbers are equal." << endl; 
      } 
    return 0;
} 
