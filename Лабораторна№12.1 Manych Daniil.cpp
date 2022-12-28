#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std; 
//функц≥€ дл€ п≥драхунку суми за заданими параметрами
double sum(int fs, int fe, const double fB, const int fC)
{
double sm=0;
int i;
const int x=5.2;
i=fs-1;
do
{
i++;
sm=sm+i*pow(sin(i),fC)-fB/log(fB+x);
}
while (i<=fe);
return sm;
}
double mul(int fs, int fe, const double fC, const double fA)
{
double ml=1;
int k;
const int x=5.2;
k=fs-1;
do
{
k++;
ml=ml*(pow(fA,k-fA)*pow(x,fC*k)/fC*k-fA);
}
while (k<=fe);
return ml;
}
int main() 
{
system("cls");
SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 
const double B=1, C=2, A=-1;
double s; 
int is, ie, js, je;
cout<<" ¬вед≥ть початков≥ значенн€ i = ";
cin>>is;
cout<<" ¬вед≥ть к≥нцеве значенн€ i = ";
cin>>ie;
cout<<" ¬вед≥ть початков≥ значенн€ j = ";
cin>>js;
cout<<" ¬вед≥ть к≥нцеве значенн€ j = ";
cin>>je;
s=sum(is, ie, B, C) + mul(js, je, A, C);
printf(" s = %7.5f \n",s);
system("pause");
return 0;
}

