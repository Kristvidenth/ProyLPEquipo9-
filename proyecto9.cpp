#include <iostream>
#include <conio>
#include <stdlib>

void pausa();

int main()
{
    bool bandera=false;
    char tecla;
    do
    {
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

		switch(tecla)
		{
			case '1':
				system("cls");
				cout << "Ha elejido el ingreso de una nueva hora.\n";
				pausa();
				break;
			case '2':
				system("cls");
				cout << "Ha elejido ver su horario para hoy.\n";
				pausa();
				break;
			case '3':
				system("cls");
				cout << "Ha elejido ver su horario de la semana.\n";
				pausa();
				break;
			case '4':
				bandera=true;
				//exit(1);
				break;
			default:
				system("cls");
				cout << "Opcion no valida.\a\n";
				pausa();
				break;
		}
    }while(bandera!=true);
    return 0;
}
void pausa()
{
    cout << "Pulsa una tecla para continuar...";
    getch();
}

