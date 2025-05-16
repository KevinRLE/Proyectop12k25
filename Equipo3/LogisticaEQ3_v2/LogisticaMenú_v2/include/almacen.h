//9959 24 11603 GE
#ifndef ALMACEN_H
#define ALMACEN_H

#include <vector>
#include <string>
#include "bitacora.h"

// Clase que representa un Almac�n dentro del sistema
class Almacen {
public:
    std::string id;             // ID �nico autogenerado en el rango 3260-3310
    std::string direccion;      // Direcci�n del almac�n
    int capacidad;              // Capacidad del almac�n en metros cuadrados
    std::string responsable;    // Nombre del responsable del almac�n
    std::string contacto;       // Informaci�n de contacto del responsable
    std::string estado;         // Estado del almac�n: "operativo" o "en mantenimiento"

    // M�todos para operaciones CRUD sobre almacenes

    // Agrega un nuevo almac�n a la lista y lo registra en la bit�cora
    static void agregar(std::vector<Almacen>& lista, const std::string& usuario);

    // Muestra todos los almacenes registrados
    static void mostrar(const std::vector<Almacen>& lista);

    // Modifica los datos de un almac�n existente seg�n su ID
    static void modificar(std::vector<Almacen>& lista, const std::string& usuario, const std::string& id);

    // Elimina un almac�n de la lista seg�n su ID
    static void eliminar(std::vector<Almacen>& lista, const std::string& usuario, const std::string& id);

    // M�todos para persistencia de datos

    // Guarda la lista completa de almacenes en un archivo de texto
    static void guardarEnArchivo(const std::vector<Almacen>& lista);

    // Carga los datos de almacenes desde un archivo de texto a la lista
    static void cargarDesdeArchivo(std::vector<Almacen>& lista);

private:
    // M�todos auxiliares internos

    // Genera un ID �nico en el rango permitido que no est� en uso
    static std::string generarID(const std::vector<Almacen>& lista);

    // Valida si el estado ingresado es v�lido ("operativo" o "en mantenimiento")
    static bool validarEstado(const std::string& estado);
};

#endif
