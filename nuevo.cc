
//Alondra Dominguez Gonzalez 
//25 de Octubre del 2017

#include <iostream>
using namespace std;

  int esPrimo(int x){
     int flag=0;
     for (int i=2; i<=x/2; i++)
       {
if (x%i==0)
  flag=1;
}
return flag;
}

int main()
{
  int p=0;  	
			
cout<<"Dame un valor de P"<<endl;
 cin>>p;			
 do{
   if ((p%2)==0)
     p=p+1;
   if  (esPrimo(p)==0)
    p=p+2;
 }while (esPrimo(p)==0);
 cout<<p<<endl;
 return 0;
}
 
