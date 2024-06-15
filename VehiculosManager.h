#pragma once
#include "VehiculosArchivo.h"

class VehiculosManager {
private:
    VehiculosArchivo _vehiculosArchivo;
public:
    VehiculosManager();
    void Menu();
    void tituloVehiculo();
    Vehiculo cargarVehiculo();
    void agregarVehiculo();
    void mostrarVehiculo(Vehiculo reg);
    void listarVehiculos();
    void buscarVehiculo();
    void buscarPorID();
    void buscarPorModelo();
    void buscarPorAnio();
    void buscarPorColor();
    void editarVehiculo();
    void eliminarVehiculo();
    void resturarVehiculo();
    void realizarBackup();
    void restaurarBackup();
};