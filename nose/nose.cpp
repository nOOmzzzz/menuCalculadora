#include "pch.h"
#include<iostream>
#include<cstdlib>
#include <conio.h>
#include "windows.h"
#include "stdlib.h"
#define ARRIBA 72
#define ABAJO 80
#define ENTER 13

using namespace System;
using namespace std;

void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if (!h)
        h = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c = { x, y };
    SetConsoleCursorPosition(h, c);
}
void xd()
{
    cout << "RAAA";
}
int menu(const char* titulo,const  char* opciones[], int n)
{   
    int opcionSeleccionada = 1;
    int tecla;
    bool repite = true;

    do {
        Console::Clear();
        gotoxy(35, 3 + opcionSeleccionada); cout << "=>";
        gotoxy(55, 2); cout << titulo;   

        for (int i = 0; i < n; i++)
        {
            gotoxy(40, 4 + i); cout << i + 1 << ") " << opciones[i];
        }

        do {
            tecla = getch();
        } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);



        switch (tecla)
        {
        case ARRIBA:
            opcionSeleccionada--;
            if (opcionSeleccionada == 0) {
                opcionSeleccionada = n;          
            }
            
            break;

        case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
                opcionSeleccionada = 1;
            }
            break;

        case ENTER:
            repite = false;
            break;
        }
    } while (repite);
    return opcionSeleccionada;
}

void menuSuma()
{
    bool repite = true;
    int opcion;
    int numero1, numero2;
    float decimal1, decimal2;
    const char* titulo = "MENU SUMA";
    const char* opciones[] = {"Sumar enteros","Sumar decimales","Regresar"};
    int n = 3;

    do {
        opcion = menu(titulo, opciones, n);

        Console::Clear();
        switch (opcion)
        {
        case 1:
            cout << endl << "ingrese el numero 1: "; cin >> numero1;
            cout << endl << "ingrese el numero 2: "; cin >> numero2;
            cout << endl << numero1 << " + " << numero2 << " = " << numero1 + numero2 << endl;
            system("pause > nul");
            break;

        case 2:
            cout << endl << "ingrese el decimal 1: "; cin >> decimal1;
            cout << endl << "ingrese el decimal 2: "; cin >> decimal2;
            cout << endl << decimal1 << " + " << decimal2 << " = " << decimal1 + decimal2 << endl;
            system("pause>nul");
            break;

        case 3:
            repite = false;
            break;

        }
    } while (repite);
}

void menuResta()
{
    bool repite = true;
    int opcion;
    int numero1, numero2;
    float decimal1, decimal2;

    const char* titulo = "MENU RESTA";
    const char* opciones[] = { "Restar enteros","Restar decimales","Regresar" };
    int n = 3;

    do {
        opcion = menu(titulo, opciones, n);

        Console::Clear();
        switch (opcion)
        {
        case 1:
            cout << endl << "ingrese el numero 1: "; cin >> numero1;
            cout << endl << "ingrese el numero 2: "; cin >> numero2;
            cout << endl << numero1 << " - " << numero2 << " = " << numero1 - numero2 << endl;
            system("pause > nul");
            break;

        case 2:
            cout << endl << "ingrese el decimal 1: "; cin >> decimal1;
            cout << endl << "ingrese el decimal 2: "; cin >> decimal2;
            cout << endl << decimal1 << " - " << decimal2 << " = " << decimal1 - decimal2 << endl;
            system("pause>nul");
            break;

        case 3:
            repite = false;
            break;

        }
    } while (repite);
}

void menuMultiplicacion()
{
    bool repite = true;
    int opcion;
    int numero1, numero2;
    float decimal1, decimal2;

    const char* titulo = "MENU MULTIPLICACION";
    const char* opciones[] = { "Multiplicar enteros","Multiplicar decimales","Regresar" };
    int n = 3;

    do {
        opcion = menu(titulo, opciones, n);

        Console::Clear();
        switch (opcion)
        {
        case 1:
            cout << endl << "ingrese el numero 1: "; cin >> numero1;
            cout << endl << "ingrese el numero 2: "; cin >> numero2;
            cout << endl << numero1 << " * " << numero2 << " = " << numero1 * numero2 << endl;
            system("pause > nul");
            break;

        case 2:
            cout << endl << "ingrese el decimal 1: "; cin >> decimal1;
            cout << endl << "ingrese el decimal 2: "; cin >> decimal2;
            cout << endl << decimal1 << " * " << decimal2 << " = " << decimal1 * decimal2 << endl;
            system("pause>nul");
            break;

        case 3:
            repite = false;
            break;

        }
    } while (repite);
}

void menuDivision()
{
    bool repite = true;
    int opcion;
    int numero1, numero2;
    float decimal1, decimal2;

    const char* titulo = "MENU DIVISION";
    const char* opciones[] = { "Dividir enteros","Dividir decimales","Regresar" };
    int n = 3;

    do {
        opcion = menu(titulo, opciones, n);

        Console::Clear();;
        switch (opcion)
        {
        case 1:
            cout << endl << "ingrese el numero 1: "; cin >> numero1;
            cout << endl << "ingrese el numero 2: "; cin >> numero2;


            if (numero2 == 0)
            {
                cout << endl << "ERROR: no se puede dividir por cero";
            }
            else { cout << endl << numero1 << " / " << numero2 << " = " << numero1 / numero2 << endl; }

            system("pause > nul");
            break;

        case 2:
            cout << endl << "ingrese el decimal 1: "; cin >> decimal1;
            cout << endl << "ingrese el decimal 2: "; cin >> decimal2;
            if (decimal2 == 0)
            {
                cout << endl << "ERROR: no se puede dividir por cero";
            }
            else { cout << endl << decimal1 << " / " << decimal2 << " = " << decimal1 / decimal2 << endl; }

            system("pause>nul");
            break;

        case 3:
            repite = false;
            break;

        }
    } while (repite);
}

void menuPrincipal()
{
    bool repite = true;
    int opcion;

    const char* titulo = "MENU PRINCIPAL";
    const char* opciones[] = { "Sumar","Restar","Multiplicar","Dividir","Salir" };
    int n = 5;
   
    do {
        opcion = menu(titulo, opciones, n);

        switch (opcion)
        {
        case 1:
            menuSuma();
            break;

        case 2:
            menuResta();
            break;

        case 3:
            menuMultiplicacion();
            break;

        case 4:
            menuDivision();
            break;

        case 5:
            
            exit(0); exit(EXIT_SUCCESS);            
        }
    } while (repite);
}



int main()
{
    menuPrincipal();

    system("pause>0");
    return 0;
}