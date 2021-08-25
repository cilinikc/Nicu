#include<iostream>

#include <cstdlib>

#include <string>

#include <fstream>

#include <iomanip>

using namespace std;
int main() {
  fstream file1;
  int number1, number2, result, result1, resultin, j, upto, many, sec;
  string operation, contin, st;
  time_t now = time(0);
  char * data1 = ctime( & now);
  sec = time(0);
  srand(sec);
  contin = "y";
  while (contin == "y") {
    cout << "addition=a subtraction=s\n multiplication=m division=d ";
    cin >> operation;
    cout << "How many operations? ";
    cin >> many;
    cout << "Operations up to? ";
    cin >> upto;
    file1.open("/storage/emulated/0/TextEditor/operatii.txt ");
    for (j = 1; j <= many; j++) {
        
      number1 = rand() % upto + 1;
      number2 = rand() % upto + 1;
      jump1:
        if (operation == "a") {
          cout << setw(4) << number1 << endl << "+" << setw(3) << number2 << endl << "=";
          cin >> resultin;
          result = number1 + number2;
          file1 << number1 << "+" << number2 << "=" << resultin << " ";

        }
      if (operation == "d") {
        result1 = number1 * number2;
        cout << result1 << ":" << number2 << "=";
        cin >> resultin;
        result = number1;
        file1 << result1 << ":" << number2 << "=" << resultin << " ";

      }
      if (operation == "m") {
        cout << number1 << "x" << number2 << "=";
        cin >> resultin;
        result = number1 * number2;
        file1 << number1 << "x" << number2 << "=" << resultin << " ";

      }
      if (operation == "s") {
        if (number1 > number2) {
          file1 << number1 << "-" << number2 << "=" << resultin << " ";
          cout << setw(4) << number1 << endl << "-" << setw(3) << number2 << endl << "=";
          cin >> resultin;
        } else {
          cout << setw(4) << number2 << endl << "-" << setw(3) << number1 << endl << "=";
          cin >> resultin;
          file1 << number2 << "-" << number1 << "=" << resultin << " ";
        }
        result = abs(number1 - number2);
      }
      if (cin.fail()) {
        std::cin.clear();
        std::cin.ignore();
        goto jump1;
      }

      if (resultin == result) {
        file1 << "ok" << " ";
        cout << "ok\n";
      } else {
        file1 << "wrong it had to be " << result << " ";
        cout << "wrong it had to be " << result << endl;
      }
    }
    cout << "\nAnother operation? y/n ";
    cin >> contin;
  }
  file1 << data1;
  file1.close();
  return 0;
}
