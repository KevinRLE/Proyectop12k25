// Inclusi�n de encabezados necesarios para los men�s y entidades
#include "menuprincipal.h"
#include "menuarchivo.h"
#include "menucatalogos.h"
#include "menuprocesos.h"
#include "usuarios.h"
#include <vector>
#include <iostream>
using namespace std;

//JENNIFER ALBA DAYAMI BARRIOS FLORES
//9959-24-10016
//MAYO 2025

// Funci�n que muestra el men� principal del sistema de gesti�n log�stica
void MenuPrincipal::mostrar(std::vector<Clientes>& clientes,
                          std::vector<Proveedor>& proveedores,
                          std::vector<Producto>& productos,
                          std::vector<Almacen>& almacenes,
                          std::vector<Administracion>& administradores,
                          std::vector<Transportistas>& transportistas,
                          usuarios& usuarioActual) {
    int choice;
    do {
        // Limpia la pantalla antes de mostrar el men�
        system("cls");

        // Encabezado del sistema con nombre del usuario
        cout << "\t\t========================================\n"
             << "\t\t|     SISTEMA DE GESTI�N LOG�STICA     |\n"
             << "\t\t========================================\n"
             << "\t\t| Usuario: " << usuarioActual.getNombre() << "\n"
             << "\t\t================================================\n"
             << "\t\t 1. Archivo\n"
             << "\t\t 2. Cat�logos\n"
             << "\t\t 3. Procesos\n"
             << "\t\t 4. Informes\n"
             << "\t\t 5. Salir\n"
             << "\t\t========================================\n"
             << "\t\tIngresa tu opci�n: ";

        // Captura la opci�n ingresada por el usuario
        cin >> choice;

        // Ejecuta la acci�n correspondiente seg�n la opci�n seleccionada
        switch(choice) {
            case 1:
                // Llama al men� de opciones de archivo (como guardar o cargar datos)
                MenuArchivo::mostrar();
                break;

            case 2:
                // Llama al men� de cat�logos, pasando todas las listas y el usuario actual
                MenuCatalogos::mostrar(clientes, proveedores, productos,
                                       almacenes, administradores,
                                       transportistas, usuarioActual);
                break;

            case 3:
                // Llama al men� de procesos operativos
                MenuProcesos::mostrar();
                break;

            case 4:
                // Funcionalidad de informes a�n no implementada
                break;

            case 5:
                // Opci�n para salir del men� principal
                return;

            default:
                // Mensaje si el usuario ingresa una opci�n inv�lida
                cout << "\n\t\tOpci�n inv�lida... Intenta de nuevo...";
        }
    } while(choice != 5); // Se repite hasta que el usuario seleccione salir
}
