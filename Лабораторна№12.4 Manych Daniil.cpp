//� �����, �� ���������� � �������� ��� � �������������� ��������, 
//�������� ����� ����� � ��������� �������� ���.
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
string cs(string s1, string sim1)
{
	 int  i,k;
	 k=0;
	  for(i=0; i<(s1.size());i++)
 {
 if(s1[i]==sim1[0])
 {
 k++;  
  s1.erase(i,1);
 i--;
}
}
string sim2(k,' ');
 return s1;
}
int main()
{
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int i, k;
k=0;
string s1;
string sim1(" ");
string s3;
string sim2(k,' ');
cout<<"������ ���������� ����� = ";
getline(cin, s1);
system("cls");
cout<<"������� ���������� ����� = "<<s1<<"\n ʳ������ ������� � ����� = "<<s1.size()<<" \n";
s3=cs(s1,sim1);
cout<<"������������ ���������� ����� = "<<s3<<"\n ʳ������ ������� � ����� = "<<s3.size()<<" \n";
return 0;
}
