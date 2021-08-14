#include<iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
FILE *fisier ;
int a, b, s, d, i, r, j, k, n, ts;
string c, t,f,st;
ostringstream sa; 
time_t now=time(0);
char *dt=ctime(&now) ;
ts=time(0);
srand(ts) ;
f="d" ;
while (f=="d") {
c="d" ;
    cout << "adunare=a scadere=s\n înmulțire=i împărțire=d ";
    cin >>t;
    cout <<"câte operații? " ;
    cin >>n;
    cout <<"operatii pana la cat? " ;
    cin >>k;
    for (j=1;j<=n;j++)
    { 
    
    a=rand() %k+1;
    b=rand()%k+1;
    fg:
    sa.str("") ;
    if (t=="a") {
    cout <<setw(4)<<a<<endl<<"+"<<setw(3) <<b<<endl<<"=" ;
    cin >>r;
    s=a+b;
    sa<<a<<"+"<<b <<"=" <<r;
    st=sa.str() ;
    }
    if (t=="d") {
    i=a*b;
    cout <<i<<":" <<b<<"=" ;
    cin >>r;
    s=i/b;
    sa<<i<<":"<<b <<"=" <<r;
    st=sa.str() ;
    }
    if (t=="i") {
    cout <<a<<"x" <<b<<"=" ;
    cin >>r;
    s=a*b;
    sa<<a<<"x"<<b <<"=" <<r;
    st=sa.str() ;
    }
    if (t=="s") {
    if(a>b) 
    {
    sa<<a<<"-"<<b <<"=" <<r;
    st=sa.str() ;
    cout<<setw(4) <<a<<endl<<"-"<<setw(3) <<b<<endl<<"=" ;
    cin>>r;
    }
    else {
    cout <<setw(4)<<b<<endl<<"-" <<setw(3)<<a<<endl<<"=" ;
    cin >>r;
    sa<<b<<"-"<<a<<"=" <<r;
    st=sa.str() ;
    }
    s=abs(a-b) ;
    }
    if(cin. fail()) {
    std::cin. clear() ;
    std::cin. ignore() ;
    goto fg;
    }
    fisier=fopen("/storage/emulated/0/TextEditor/operatii.txt ", "a") ;
fprintf(fisier,"%s", st ) ;
    if (r==s) {
    fprintf(fisier,"ok") ;
    cout <<"ok\n" ;
    }
    else {
    fprintf(fisier,"gresit trebuia %d", s) ;
    cout <<"gresit trebuia " <<s<<endl;
    }
    fclose(fisier) ;
    }
    cout <<"\nalta operatie? d/n " ;
    cin >>f;
    }
    fisier=fopen("/storage/emulated/0/TextEditor/operatii.txt ", "a") ;
    fprintf(fisier,"%s ", dt ) ;
    fclose(fisier) ;
    return 0;
}