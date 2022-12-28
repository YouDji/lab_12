
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int p_m(int *f, int nf, int mf) 
{
int i, j;
for(i = 0; i < nf; i++) 
{
for(j = 0; j < mf; j++) 
printf("%5d",*(f + i*mf + j));
cout << endl;
}
return 0;
}
int i_m(int *f, int nf, int mf) 
{
int i, j;
for(i = 0; i < nf; i++) 
{
for(j = 0; j < mf; j++) 
cin>>*(f + i*mf + j);
}
return 0;
}
int p_v(int *vf, int k) 
{
int i;
for(i = 0; i < k; i++) 
{
printf("%5d ", vf[i]);
}
return 0;
}
int p_v(float *vf, int k) 
{
int i;
for(i = 0; i < k; i++) 
{
printf("%5.2f ", vf[i]);
}
return 0;
}
int sum(int *vf, int k)
{
int i = 0, s = 0;
for(i = 0; i < k; i++) 
{
	
	if(vf[i]<0)
	{
	
		s=s+vf[i];	
}

}
return s;
}
int main()
{
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
const int n = 4, m = 5; 
int a[n][m];
int v[] = {0}, sm1[n] = {0},sm2[m] = {0};;
float sr1[] = {0};
int i, j;
printf("введите матрицу  a(%d,%d)\n",n,m);
i_m(&a[0][0],n,m);
system("cls");
printf("заданая матрица : a(%d,%d)\n",n,m);
p_m(&a[0][0],n,m);
for(j = 0; j < m; j++) 
{
for(i = 0; i < n; i++) 
v[i] = a[i][j];
sm1[j]=sum(v, n);
}
for(j = 0; j < m; j++) 
{
for(i = 0; i < n; i++) 
v[i] = a[i][j];
sm2[j]=sum(v, n);
}
cout<<"\nСума елементів кожного рядка матриці = \n";
p_v(sm1, n);
cout<<"\nСума елементів кожного стовпчика матриці = \n"; 
p_v(sm2, m);
return 0;
}
