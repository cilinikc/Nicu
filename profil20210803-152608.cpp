#include <iostream> 
#include <string>
#include <stdio.h>
using namespace std;
FILE *fisier; 
 int main() { 
int n, fi, L, h, w; 
double vol, pi, g, c, b, gr, l, k;
string nu, d;
time_t now=time(0);
char *dt=ctime(&now) ;
pi=3.141592;
c=2.466/0.0012566;// coeficient *vol=greutate pe metru liniar

d="d" ;
while (d=="d") {
l=0;
L=0;
w=0;
k=0;
h=0;
cout <<"Tip profil ta=tabla fi=rotund cor=cornier\n unp ipe inp " ;
cin >> nu; 
if (nu=="inp") 
{
cout <<" de " ;
cin >>w;
cout <<" greutate totala " ;
cin >>gr;
cout <<"lungime " ;
cin >>l;
if(w==80)
k=6.1;
if(w==100)
k=8.5;
if(w==120)
k=11.5;
if(w==140)
k=14.7;
if(w==160)
k=18.5;
if(w==180)
k=22.5;
if(w==200)
k=27;
if(w==240)
k=37;
if(w==260)
k=43;
if(w==280)
k=49;
if(w==300)
k=56;
g=gr/l/k;
cout <<"bucati " <<g;
}
if (nu=="ipe") 
{
cout <<" de " ;
cin >>w;
cout <<" greutate totala " ;
cin >>gr;
cout <<"lungime " ;
cin >>l;
if(w==80)
k=6.2;
if(w==100)
k=8.3;
if(w==120)
k=10.7;
if(w==140)
k=13.2;
if(w==160)
k=16.2;
if(w==180)
k=19.3;
if(w==200)
k=23;
if(w==220)
k=26.9;
if(w==240)
k=31.5;
if(w==270)
k=37;
if(w==300)
k=43.3;
g=gr/l/k;
cout <<"bucati " <<g;
}
if (nu=="unp") 
{
cout <<" de " ;
cin >>w;
cout <<" greutate totala " ;
cin >>gr;
cout <<"lungime " ;
cin >>l;
if(w==80)
k=8.9;
if(w==100)
k=10.9;
if(w==120)
k=13.7;
if(w==140)
k=16.4;
if(w==160)
k=19.3;
if(w==180)
k=22.5;
if(w==200)
k=26;
if(w==220)
k=30;
if(w==240)
k=33.2;
if(w==300)
k=46.2;
g=gr/l/k;
cout <<"bucati " <<g;
}
if (nu=="cor") {
cout <<"latura " ;
cin >>w;
cout <<"grosime " ;
cin >>h;
cout <<"greutate totala" ;
cin >>gr;
cout <<"lungime " ;
cin >>l;
if (w==20)
k=0.884;
if(w==25)
{
if(h==3)
k=1.123;
if(h==4)
k=1.466;
if(h==5)
k=1.793;
}
if(w==30)
{
if(h==3)
k=1.362;
if(h==4)
k=1.785;
if(h==5)
k=2.191;
}
if(w==35)
if(h==4)
k=2.103;
if(w==40)
{
if(h==4)
k=2.422;
if(h==5)
k=2.988;
if(h==6)
k=3.538;
}
if(w==45)
{
if(h==4)
k=2.741;
if(h==5)
k=3.386;
if(h==6)
k=4.016;
}
if(w==50)
{
if(h==5)
k=3.785;
if(h==6)
k=4.494;
if(h==7)
k=5.187;
}
if(w==55)
{
if(h==5)
k=4.183;
if(h==6)
k=4.972;
}
if(w==60)
{
if(h==5)
k=4.581;
if(h==6)
k=5.45;
if(h==8)
k=7.139;
if(h==10)
k=8.765;
}
if(w==70)
{
if(h==6)
k=6.406;
if(h==7)
k=7.31;
if(h==8)
k=8.414;
if(h==10)
k=10.358;
}
if(w==80)
{
if(h==6)
k=7.362;
if(h==8)
k=9.689;
if(h==10)
k=11.952;
}
if(w==90)
{
if(h==6)
k=8.318;
if(h==8)
k=10.964;
if(h==10)
k=13.545;
if(h==12)
k=16.063;
}
if(w==100)
{
if(h==8)
k=12.238;
if(h==10)
k=14.915;
if(h==12)
k=17.975;
if(h==15)
k=22.111;
}
if(w==120)
{
if(h==8)
k=14.788;
if(h==10)
k=18.326;
if(h==12)
k=21.8;
if(h==15)
k=26.891;
}
if(w==150)
{
if(h==10)
k=23.106;
if(h==12)
k=27.537;
if(h==15)
k=34.062;
if(h==18)
k=40.444;
}
if(w==200)
{
if(h==16)
k=48.954;
if(h==18)
k=54.786;
if(h==20)
k=60.555;
if(h==24)
k=71.901;
}
g=gr/k/l;
cout <<"bucati " <<g<<gr<<k<<l;
}
if (nu=="ta") 
{
cout <<"lungime m " ;
cin >>L;
cout <<"lățime m " ;
cin >>l;
cout <<"grosime mm " ;
cin >>h;
cout <<"greutate totala kg " ;
cin >>gr;
g=gr/((8000*l*L*h) /1000) ;
cout <<"bucăți " <<g;
}
if (nu=="fi") 
{
cout<< "de ";
cin >> fi;
cout <<"L bara? ";
cin >>l;
cout <<"greutate totala? ";
cin >>gr;
vol=pi*fi*fi/1000000;
k=vol*c;
g=(gr/(vol*c)) /l;
cout << "nr bare " << g <<" \n  kg/m " <<k ;
}
fisier=fopen("/storage/emulated/0/TextEditor/new.txt ", "a") ;
fprintf(fisier,"\n%s", nu) ;
fprintf(fisier, " L %d" , L) ;
fprintf(fisier , " l %5.0lf" , l) ;
fprintf(fisier, " h %d" , h) ;
 fprintf(fisier, " w %d" , w) ;
fprintf(fisier, " buc %5.2lf", g) ; 
 fprintf(fisier, " kg/m %5.2lf" , k) ; 
fprintf(fisier, " gr %5.2lf" , gr) ;
fclose(fisier);

cout <<"\nContinuati?(d/n)";
cin >>d;
}
 fisier=fopen("/storage/emulated/0/TextEditor/new.txt ", "a") ;
fprintf(fisier,"\n%s", dt) ;
fclose(fisier) ;
return 0;
}
