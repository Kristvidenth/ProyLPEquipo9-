 #include <iostream>
#include <conio>
#include <stdlib>

bool validarHoras(DatosHoraClase hora)
{

	bool resultado = false;
   int hora_inicio = hora.MinutoInicio + (hora.HoraInicio * 60);
   int hora_fin = hora.MinutoFin + (hora.HoraFin * 60);
   if(hora_inicio < hora_fin){
        resultado = true;
   } else {
    	printf("\n La hora de Inicio debe ser Menor que la hora Fin \n");
   }
   return resultado;
}
main()
{
int b, d, h,V[10];
cout<<"ingrese los dias laborables: \n";
cin>>d;
cout<<"Ingrese las horas al dia que labora: \n";
cin>>h;
validarHoras;
getch();
}