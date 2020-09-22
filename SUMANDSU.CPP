#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],n,s=0,o=0;
cout<<"enter the value ";
cin>>n;
cout<<"enter the  numbers"<<endl;
for (int i=0;i<n;i++)
{
cin>>a[i];
}
 for(int j=0;j<n;j++)
 {
if(a[j]%2==0)
{
  s=s+a[j] ;
}
else
{
  o=o-a[j] ;
}
}
cout<<"the sum of even numbers is"<<endl;
cout<<s<<endl;;
cout<<"the sub of odd numbers is"<<endl;
cout<<o<<endl;
getch();
}
