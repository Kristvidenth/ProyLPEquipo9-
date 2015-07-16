#include <iostream>
#include <conio>
#include <stdlib>

void lectura (int d, int h, char V[])
{
   cout<<"Ingrese su horario e clases: \n";
	for(int i=0; i<d;i++)
   {
       for (int j=0;j<h;j++)
        cin>> V[i,j];
     }
}


main()
{
int b, d, h,V[10];
cout<<"ingrese los dias laborables: \n";
cin>>d;
cout<<"Ingrese las horas al dia que labora: \n";
cin>>h;
lectura(d,h);
getch();
}