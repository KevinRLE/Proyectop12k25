// Autor: Jennifer Barrios - Coordinadora Equipo 3
// Carnet: 9959-24-10016
// Fecha: Mayo 2025
// Descripci�n: Encabezado para la gesti�n de pedidos del sistema

// Protecci�n para evitar m�ltiples inclusiones
#ifndef PEDIDOS_H
#define PEDIDOS_H

// Bibliotecas necesarias
#include "bitacora.h"  // Para el registro de actividades del sistema
#include "usuarios.h"  // Para manejar informaci�n de usuarios

// Clase principal para manejo de pedidos
class Pedidos {
public:
    // M�todos b�sicos de acceso a datos

    // Obtiene el identificador �nico del pedido
    std::string getId() const;

    // Obtiene la descripci�n detallada del pedido
    std::string getDetalles() const;

    // M�todos de operaciones con pedidos

    // Muestra el men� principal de gesti�n de pedidos
    void gestionPedidos();

    // Crea un nuevo pedido en el sistema
    void crearPedido();

    // Muestra la lista de pedidos existentes
    void consultarPedidos();

    // Permite editar un pedido existente
    void modificarPedido();

    // Cancela/elimina un pedido del sistema
    void cancelarPedido();

    // Muestra el historial completo de pedidos
    void verHistorial();
};

// Fin del archivo de encabezado
#endif // PEDIDOS_H
