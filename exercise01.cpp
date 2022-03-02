#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
  cout<< setw(5) << "No" << setw(15) << "Name" << setw(10) << "Marks" << endl;
 cout << "No" << "Name" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<stew(5)
          <<  r+1
          <<stew(15)
          <<  names[r]
          << setw(10)<< setprecision(2) << setiosflags(ios::fixed)
          << marks[r] << endl;
 }
}