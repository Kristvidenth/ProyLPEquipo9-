#include <iostream>
#include <conio>
#include <stdio>
#include <fstream>
#include <stdlib>
#include <time>

int main()
{
    bool bandera=false;
    char tecla;


        ofstream archivolun("C:/BC5/HORARIO/horariolun.txt");
	archivolun<<"\n";
	archivolun.close();
   ofstream archivomar("C:/BC5/HORARIO/horariomar.txt");
	archivomar<<"\n";
	archivomar.close();
   ofstream archivomie("C:/BC5/HORARIO/horariomie.txt");
	archivomie<<"\n";
	archivomie.close();
   ofstream archivojue("C:/BC5/HORARIO/horariojue.txt");
	archivojue<<"\n";
	archivojue.close();
   ofstream archivovie("C:/BC5/HORARIO/horariovie.txt");
	archivovie<<"\n";
	archivovie.close();


  	time_t t;
  	struct tm *tm;
  	char fecha[100], hora[100], horah[100],fechah[100];


   int m, horario, opc;

   do
   {
   t=time(NULL);
   tm=localtime(&t);
   strftime(fechah, 100,"%A", tm);
   strftime(fecha, 100,"FECHA: %d/%m/%Y", tm);
   strftime(hora,100,"HORA: %H:%M:%S", tm);
   strftime(horah,100,"%Hh%M", tm);
   printf ("%s\n", fecha);
   printf ("%s\n",hora);
   system("cls");
        cin.clear();
        cout << "Menu Principal" << endl;
        cout << "-----------" << endl << endl;
        cout << "\t1 .- Ingresar una hora de clases" << endl;
        cout << "\t2 .- Ver horario de hoy" << endl;
        cout << "\t3 .- Ver horario de la semana" << endl;
        cout << "\t4 .- Salir" << endl<< endl;
        cout << "Elije una opcion: ";
        cin >> tecla;

         char mat[10], sem[10],  dia[10], ini[10], fin[10],caracter;
   ofstream archivo1("C:/BC5/HORARIO/horariolun.txt",ios::app);
   ofstream archivo2("C:/BC5/HORARIO/horariomar.txt",ios::app);
   ofstream archivo3("C:/BC5/HORARIO/horariomie.txt",ios::app);
   ofstream archivo4("C:/BC5/HORARIO/horariojue.txt",ios::app);
   ofstream archivo5("C:/BC5/HORARIO/horariovie.txt",ios::app);
   ifstream archivolun("C:/BC5/HORARIO/horariolun.txt", ios::in);
   ifstream archivomar("C:/BC5/HORARIO/horariomar.txt", ios::in);
   ifstream archivomie("C:/BC5/HORARIO/horariomie.txt", ios::in);
   ifstream archivojue("C:/BC5/HORARIO/horariojue.txt", ios::in);
   ifstream archivovie("C:/BC5/HORARIO/horariovie.txt", ios::in);


		switch(tecla)
		{
			case '1':
				  	printf("\nIngrese los siguientes Datos: \n\n");
      	printf("NOMBRE DE LA MATERIA: \n");
      	scanf("%s",&mat);

      	printf("SEMESTRE: \n");
      	scanf("%s",&sem);

      	printf("DIA DE LA SEMANA: \n");
         scanf("%s",&dia);

         while(strcmp(dia,"LUNES")!=0 && strcmp(dia,"MARTES")!=0 && strcmp(dia,"MIERCOLES")!=0 && strcmp(dia,"JUEVES")!=0 && strcmp(dia,"VIERNES")!=0)
         {
          printf("Ingresos permitidos: LUNES, MARTES, MIERCOLES, JUEVES, VIERNES\nDIA DE LA SEMANA: \n");
          scanf("%s",&dia);
         }

      	printf("HORA DE INICIO: \n");
      	scanf("%s",&ini);
         while(strcmp(ini,"07h00")!=0 && strcmp(ini,"08h00")!=0 && strcmp(ini,"09h00")!=0 && strcmp(ini,"10h00")!=0 && strcmp(ini,"11h00")!=0 && strcmp(ini,"12h00")!=0 && strcmp(ini,"13h00")!=0 && strcmp(ini,"14h00")!=0 && strcmp(ini,"15h00")!=0 && strcmp(ini,"16h00")!=0 && strcmp(ini,"17h00")!=0 && strcmp(ini,"18h00")!=0 && strcmp(ini,"19h00")!=0 && strcmp(ini,"20h00")!=0 && strcmp(ini,"21h00")!=0)
         {
          printf("Formato permitido: EJ. 07h00 \nHORA DE INICIO: \n");
          scanf("%s",&ini);
         }

         printf("HORA DE FIN: \n");
      	scanf("%s",&fin);
         while(strcmp(fin,"07h00")!=0 && strcmp(fin,"08h00")!=0 && strcmp(fin,"09h00")!=0 && strcmp(fin,"10h00")!=0 && strcmp(fin,"11h00")!=0 && strcmp(fin,"12h00")!=0 && strcmp(fin,"13h00")!=0 && strcmp(fin,"14h00")!=0 && strcmp(fin,"15h00")!=0 && strcmp(fin,"16h00")!=0 && strcmp(fin,"17h00")!=0 && strcmp(fin,"18h00")!=0 && strcmp(fin,"19h00")!=0 && strcmp(fin,"20h00")!=0 && strcmp(fin,"21h00")!=0)
         {
          printf("Formato permitido: EJ. 07h00 \nHORA DE FIN: \n");
          scanf("%s",&fin);
         }
         printf("Presione una tecla para regresar al menu principal\n\n");


         if (strcmp(dia,"LUNES")==0)
         {
         archivo1<<"MATERIA: "<<mat<<"\n";
         archivo1<<"SEMESTRE: "<<sem<<"\n";
         archivo1<<"DIA: Lunes\n";
         archivo1<<"HORA DE INICIO: "<<ini<<"\n";
         archivo1<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"MARTES")==0)
         {
         archivo2<<"MATERIA: "<<mat<<"\n";
         archivo2<<"SEMESTRE: "<<sem<<"\n";
         archivo2<<"DIA: Martes\n";
         archivo2<<"HORA DE INICIO: "<<ini<<"\n";
         archivo2<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"MIERCOLES")==0)
         {
         archivo3<<"MATERIA: "<<mat<<"\n";
         archivo3<<"SEMESTRE: "<<sem<<"\n";
         archivo3<<"DIA: Miercoles\n";
         archivo3<<"HORA DE INICIO: "<<ini<<"\n";
         archivo3<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"JUEVES")==0)
         {
         archivo4<<"MATERIA: "<<mat<<"\n";
         archivo4<<"SEMESTRE: "<<sem<<"\n";
         archivo4<<"DIA: Jueves\n";
         archivo4<<"HORA DE INICIO: "<<ini<<"\n";
         archivo4<<"HORA FIN: "<<fin<<"\n\n";}
         if (strcmp(dia,"VIERNES")==0)
         {
         archivo5<<"MATERIA: "<<mat<<"\n";
         archivo5<<"SEMESTRE: "<<sem<<"\n";
         archivo5<<"DIA: Viernes\n";
         archivo5<<"HORA DE INICIO: "<<ini<<"\n";
         archivo5<<"HORA FIN: "<<fin<<"\n\n";}


         archivo1.close();
         archivo2.close();
         archivo3.close();
         archivo4.close();
         archivo5.close();
         getch;
         break;
			case '2':
				system("cls");
				cout << "Ha elejido ver su horario para hoy.\n";
				break;
			case '3':
				system("cls");
				cout << "Ha elejido ver su horario de la semana.\n";
				break;
			case '4':
				bandera=true;
				//exit(1);
				break;
			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				break;
		}
    }
   while(bandera!=true);

    getch();
}

