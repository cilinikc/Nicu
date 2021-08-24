#include<iostream>

using namespace std;

int main() {
  int generate, sec, contour, inputx;
  sec = time(0);
  srand(sec);
  generate = rand() % 100 + 1;
  contour = 1;
  do {
    cout << "Ghicește numarul ";
    cin >> inputx;
    if (generate < inputx)
      cout << "Prea mare. Mai încearcă " << endl;
    else if (generate > inputx)
      cout << "Prea mic. Mai încearcă " << endl;
    else
      cout << "Felicitări ai ghicit din " << contour << " încercări";
    contour++;
  }
  while (generate != inputx);
  return 0;
}
