#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <fstream.h>
#include <time.h>


struct horario{
int s;
char a[15];
char b[30];
char c[10];
char d[10];
char f[10];
};

int a[10];

main(){
time_t ltime;
char dia_semana[4], str[80];
time( &ltime );
horario clase[30];
int opcion;
int i=0;
int j;
int s=0;
char resp;

    do{
    clrscr();
    cout<<"Menu Principal"<<endl;
    cout<<"1.­ Ingresar una nueva hora de clases"<<endl;
    cout<<"2.­ ver horario de hoy"<<endl;
    cout<<"3.­ Ver horario de la semana"<<endl;
    cout<<"4.­ Salir"<<endl;
    cout<<"elige una opcion:"<<endl;
    cin>>opcion;
    ofstream archivo("D:\\base.txt", ios::app);
    switch(opcion){
         case 1:
              clrscr();
              archivo<<"\n";
              archivo<<"MATERIA:\n";
              cout<<"ingrese Nombre de la Materia:"<<endl;
              cin>>clase[i].a;
              archivo<<clase[i].a<<"\n";

              archivo<<"NOMBRE DEL SEMESTRE:\n";
              cout<<"ingrese el nombre del semestre:"<<endl;
              cin>>clase[i].b;
              archivo<<clase[i].b<<"\n";

              archivo<<"DIA DE LA SEMANA:\n";
              cout<<"ingrese el dia(LUN,MAR,MIE,JUE o VIE):"<<endl;
              cin>>clase[i].c;
              archivo<<clase[i].c<<"\n";

              archivo<<"INICIO DE LA HORA:\n";
              cout<<"ingrese el inicio de hora:"<<endl;
              cin>>clase[i].d;
              archivo<<clase[i].d<<"\n";

              archivo<<"FIN DE HORA:\n";
              cout<<"ingrese la fin de hora:"<<endl;
              cin>>clase[i].f;
              archivo<<clase[i].f<<"\n";
              i=i+1;
              j=i;
              archivo.close();
              break;
         case 2:
              clrscr();
              sprintf(str, "%s", ctime( &ltime ) );
              sscanf (str, "%s ", dia_semana);

              for(i=0;i<j;i++){

              if(dia_semana[0]=='M'){
              if(clase[i].c[0]=='L'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }
              }

              if(dia_semana[2]=='e'){
              if(clase[i].c[1]=='A'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }
              }


              if(dia_semana[0]=='W'){
              if(clase[i].c[0]=='M' && clase[i].c[1]=='I'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }
              }

              if(dia_semana[1]=='h'){
              if(clase[i].c[0]=='J'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }
              }

              if(dia_semana[0]=='F'){
              if(clase[i].c[0]=='V'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }
              }


              }
              break;

         case 3:
              clrscr();

              for(i=0;i<j;i++){

              if(clase[i].c[0]=='L'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }


              if(clase[i].c[1]=='A'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }



              if(clase[i].c[0]=='M' && clase[i].c[1]=='I'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }


              if(clase[i].c[0]=='J'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }


              if(clase[i].c[0]=='V'){
              cout<<clase[i].c<<':'<<clase[i].d<<'-'<<clase[i].f<<endl;
              cout<<clase[i].b<<endl;
              cout<<clase[i].a<<"\n"<<endl;
              }



              }
              break;
         case 4:
              exit(1);
              break;
         default:
                 cout<<"es una opcion no valida"<<endl;
                 break;
    }
    cout<<"Deseas continuar?..(S/N) >>";
    resp = getch();//La variable resp almacena la tecla presionada
    }while(resp=='s' || resp =='S');
    cin.ignore();
    cin.get();
    return 0;
}


