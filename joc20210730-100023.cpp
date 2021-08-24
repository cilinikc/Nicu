#include<iostream>

using namespace std;

int main() {
  int generate, sec, contour, inputx;
  sec = time(0);
  srand(sec);
  generate = rand() % 100 + 1;
  contour = 1;
  do {
    cout << "Guess the number: ";
    cin >> inputx;
    if (generate < inputx)
      cout << "Too big. Keep trying " << endl;
    else if (generate > inputx)
      cout << "Too little. Keep trying " << endl;
    else
      cout << "Congratulation you did it in " << contour << " mooves";
    contour++;
  }
  while (generate != inputx);
  return 0;
}
