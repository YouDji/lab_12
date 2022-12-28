#include <time.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int cpv(int *v, int nv)
{
int i;
for (i=0;i<nv;i++)
{
v[i] = rand()%100-50;
printf("%5.2f ",v[i]);
}
cout<<"\n";
return 0;
}
double maxv(int *v, int nv)
{
double srv;
int sum =  0, k = 0;
int i,sr;
for (i=1;i<nv;i++)

if (v[i]%2==0)
{
sum += v[i];
 k++;
 srv=sum/k;
}
return srv;
}
int main() 
{
system("cls");
SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 
int i,n1;
srand(time(NULL));
cout<<"введите количество цифр в масиве = ";
cin>>n1;
int a1[n1];
cout<<" сформированный масив  a1["<<n1<<"] = ";
cpv(a1, n1);
cout<<"среднее арифметическое мaссивa ="<<maxv(a1, n1);
system("pause");
return 0;
}
