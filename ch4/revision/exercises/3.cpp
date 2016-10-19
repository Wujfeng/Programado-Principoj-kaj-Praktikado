/*

  1. Compute and print the total distance. - DONE
  2. Find and print the smallest and the greatest distance between two
     neighboring cities. - DONE
  3. Find and print the mean distance between two neighboring cities. - DONE

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector <double> distances (0);
  double distance;
  while (cin >> distance)
    distances.push_back (distance);
  
  double sum = 0;
  for (int i = 0; i < distances.size(); ++i) sum += distances[i];

  cout << "The total distance is " << sum << " kilometers." << endl;

  sort (distances.begin(), distances.end());
  cout << "The nearest cities are " << distances[0] << " kilometers apart." << endl;
  cout << "And the farthest cities are separated by a distance of " << distances[distances.size()-1] << " kilometers." << endl;

  double mean = 0;
  mean = sum / distances.size();
  cout << "The mean distance between two random cities is " << mean << " kilometers." << endl; 
  return 0;
} 
