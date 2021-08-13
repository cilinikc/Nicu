#include<iostream>
using namespace std;

int main()
{
int i, s, u, x;
s=time(0);
srand(s);
i=rand()%100+1;
u=1;
do {
    cout << "Ghicește numarul ";
    cin >>x;
    if (i<x) 
    cout <<"Prea mare. Mai încearcă "<<endl;
    else if (i>x) 
    cout <<"Prea mic. Mai încearcă " <<endl; 
    else 
    cout <<"Felicitări ai ghicit din " <<u<<" încercări";
   u++;
     }
    while (i!=x) ;
    return 0;
}