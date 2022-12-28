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


bool lf(int *f, int nf, int mf)
{
  int i, j;
  int a[i][j];
  int summa1=0;
    for (i = 0; i < nf; i++)
        for (j = 0; j < mf; j++);
        {
            if (i<j)
                summa1 += a[i][j];
        }
        return summa1;
}
bool of(int *f, int nf, int mf)
{
  int  i, j;
  int a[i][j];
   int summa2=0;
    for (i = 0; i < nf; i++)
        for (j = 0; j < mf; j++);
        {
            if (i>j)
                summa2 += a[i][j];
        }
          return summa2;
}
int main()
{
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
const int n = 4, m = 5; 
int a[n][m];
int summa2=0,summa1=0;
printf("Введіть матрицю a(%d,%d)\n",n,m);
i_m(&a[0][0],n,m);
system("cls");
printf("Задана матриця: a(%d,%d)\n",n,m);
p_m(&a[0][0],n,m);
cout<<"Сума верхньої діагоналі"<<lf(&summa1,n,m)<<endl;
cout<<"Сума нижньої діагоналі"<<of(&summa2,n,m)<<endl;
if (lf(&summa1,n,m)==of(&summa2,n,m))
cout<<"\n сума частин рівні  рівні\n";
else 
cout<<"\n сума частин матриці не рівні \n";
return 0;
}


