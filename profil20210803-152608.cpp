#include <iostream>

#include <string>

#include <stdio.h>

using namespace std;
FILE * file1;
int main() {
  int diameter, length, thickness;
  double vol, pieces, weight, width, coefficient;
  string name, continu;
  time_t now = time(0);
  char * data1 = ctime( & now);
  double
  const pi = 3.141592;
  continu = "y";
  while (continu == "y") {
    cout << "Tip profil me=metal sheet ro=round bar cor=cornier\n unp ipe inp ";
    cin >> name;
    weight=0;
    width=0;
    coefficient=0;
    length=0;
    thickness=0;
    
    if (name == "inp") {
      cout << " Width ";
      cin >> width;
      cout << "  Total weight kg ";
      cin >> weight;
      cout << "Length ";
      cin >> length;
      if (width == 80)
        coefficient = 6.1;
      if (width == 100)
        coefficient = 8.5;
      if (width == 120)
        coefficient = 11.5;
      if (width == 140)
        coefficient = 14.7;
      if (width == 160)
        coefficient = 18.5;
      if (width == 180)
        coefficient = 22.5;
      if (width == 200)
        coefficient = 27;
      if (width == 240)
        coefficient = 37;
      if (width == 260)
        coefficient = 43;
      if (width == 280)
        coefficient = 49;
      if (width == 300)
        coefficient = 56;
      pieces = weight / length / coefficient;
      cout << "Pieces " << pieces;
    }
    if (name == "ipe") {
      cout << " Width ";
      cin >> width;
      cout << " Total weight ";
      cin >> weight;
      cout << "Length ";
      cin >> length;
      if (width == 80)
        coefficient = 6.2;
      if (width == 100)
        coefficient = 8.3;
      if (width == 120)
        coefficient = 10.7;
      if (width == 140)
        coefficient = 13.2;
      if (width == 160)
        coefficient = 16.2;
      if (width == 180)
        coefficient = 19.3;
      if (width == 200)
        coefficient = 23;
      if (width == 220)
        coefficient = 26.9;
      if (width == 240)
        coefficient = 31.5;
      if (width == 270)
        coefficient = 37;
      if (width == 300)
        coefficient = 43.3;
      pieces = weight / length / coefficient;
      cout << "Pieces " << pieces;
    }
    if (name == "unp") {
      cout << " Width ";
      cin >> width;
      cout << " Total weight ";
      cin >> weight;
      cout << "Length ";
      cin >> length;
      if (width == 80)
        coefficient = 8.9;
      if (width == 100)
        coefficient = 10.9;
      if (width == 120)
        coefficient = 13.7;
      if (width == 140)
        coefficient = 16.4;
      if (width == 160)
        coefficient = 19.3;
      if (width == 180)
        coefficient = 22.5;
      if (width == 200)
        coefficient = 26;
      if (width == 220)
        coefficient = 30;
      if (width == 240)
        coefficient = 33.2;
      if (width == 300)
        coefficient = 46.2;
      pieces = weight / length / coefficient;
      cout << "Pieces " << pieces;
    }
    if (name == "cor") {
      cout << "Width ";
      cin >> width;
      cout << "Thickness ";
      cin >> thickness;
      cout << "Total weight";
      cin >> weight;
      cout << "Length ";
      cin >> length;
      if (width == 20)
        coefficient = 0.884;
      if (width == 25) {
        if (thickness == 3)
          coefficient = 1.123;
        if (thickness == 4)
          coefficient = 1.466;
        if (thickness == 5)
          coefficient = 1.793;
      }
      if (width == 30) {
        if (thickness == 3)
          coefficient = 1.362;
        if (thickness == 4)
          coefficient = 1.785;
        if (thickness == 5)
          coefficient = 2.191;
      }
      if (width == 35)
        if (thickness == 4)
          coefficient = 2.103;
      if (width == 40) {
        if (thickness == 4)
          coefficient = 2.422;
        if (thickness == 5)
          coefficient = 2.988;
        if (thickness == 6)
          coefficient = 3.538;
      }
      if (width == 45) {
        if (thickness == 4)
          coefficient = 2.741;
        if (thickness == 5)
          coefficient = 3.386;
        if (thickness == 6)
          coefficient = 4.016;
      }
      if (width == 50) {
        if (thickness == 5)
          coefficient = 3.785;
        if (thickness == 6)
          coefficient = 4.494;
        if (thickness == 7)
          coefficient = 5.187;
      }
      if (width == 55) {
        if (thickness == 5)
          coefficient = 4.183;
        if (thickness == 6)
          coefficient = 4.972;
      }
      if (width == 60) {
        if (thickness == 5)
          coefficient = 4.581;
        if (thickness == 6)
          coefficient = 5.45;
        if (thickness == 8)
          coefficient = 7.139;
        if (thickness == 10)
          coefficient = 8.765;
      }
      if (width == 70) {
        if (thickness == 6)
          coefficient = 6.406;
        if (thickness == 7)
          coefficient = 7.31;
        if (thickness == 8)
          coefficient = 8.414;
        if (thickness == 10)
          coefficient = 10.358;
      }
      if (width == 80) {
        if (thickness == 6)
          coefficient = 7.362;
        if (thickness == 8)
          coefficient = 9.689;
        if (thickness == 10)
          coefficient = 11.952;
      }
      if (width == 90) {
        if (thickness == 6)
          coefficient = 8.318;
        if (thickness == 8)
          coefficient = 10.964;
        if (thickness == 10)
          coefficient = 13.545;
        if (thickness == 12)
          coefficient = 16.063;
      }
      if (width == 100) {
        if (thickness == 8)
          coefficient = 12.238;
        if (thickness == 10)
          coefficient = 14.915;
        if (thickness == 12)
          coefficient = 17.975;
        if (thickness == 15)
          coefficient = 22.111;
      }
      if (width == 120) {
        if (thickness == 8)
          coefficient = 14.788;
        if (thickness == 10)
          coefficient = 18.326;
        if (thickness == 12)
          coefficient = 21.8;
        if (thickness == 15)
          coefficient = 26.891;
      }
      if (width == 150) {
        if (thickness == 10)
          coefficient = 23.106;
        if (thickness == 12)
          coefficient = 27.537;
        if (thickness == 15)
          coefficient = 34.062;
        if (thickness == 18)
          coefficient = 40.444;
      }
      if (width == 200) {
        if (thickness == 16)
          coefficient = 48.954;
        if (thickness == 18)
          coefficient = 54.786;
        if (thickness == 20)
          coefficient = 60.555;
        if (thickness == 24)
          coefficient = 71.901;
      }
      pieces = weight / coefficient / length;
      cout << "Pieces " << pieces;
    }
    if (name == "me") {
      cout << "Length m ";
      cin >> length;
      cout << "Width m ";
      cin >> width;
      cout << "Thickness mm ";
      cin >> thickness;
      cout << "Total weight kg ";
      cin >> weight;
      pieces = weight / ((8000 * width * length * thickness) / 1000);
      cout << "Pieces " << pieces;
    }
    if (name == "ro") {
      cout << "Diameter ";
      cin >> diameter;
      cout << "Length bar? ";
      cin >> length;
      cout << "Total weight? ";
      cin >> weight;
      vol = pi * diameter * diameter / 1000000;
      coefficient = vol * (2.466 / 0.0012566);
      pieces = (weight / coefficient) / length;
      cout << "Bar pieces " << pieces << " \n  kg/m " << coefficient;
    }
    file1 = fopen("/storage/emulated/0/TextEditor/new.txt ", "a");
    fprintf(file1, "\n%s", name);
    fprintf(file1, " Length %d", length);
    fprintf(file1, " Thickness %d", thickness);
    fprintf(file1, " Width %d", width);
    fprintf(file1, " Pieces %5.2lf", pieces);
    fprintf(file1, " kg/m %5.2lf", coefficient);
    fprintf(file1, " Weight %5.2lf", weight);
    fclose(file1);

    cout << "\nContinue?(y/n)";
    cin >> continu;
  }
  file1 = fopen("/storage/emulated/0/TextEditor/new.txt ", "a");
  fprintf(file1, "\n%s", data1);
  fclose(file1);
  return 0;
}
