#include <iostream>

// Función que muestra el destino según el código de área
void MostrarDestino(int codigoArea) {
    std::string destino; // Variable para almacenar el destino

    // Utilizar un switch para verificar el código de área y asignar el destino correspondiente
    switch (codigoArea) {
        case 212:
            destino = "Nueva York";
            break;
        case 305:
            destino = "Miami";
            break;
        case 407:
            destino = "Orlando";
            break;
        case 415:
            destino = "San Francisco";
            break;
        case 512:
            destino = "Austin";
            break;
        default:
            destino = "DDD NO ENCONTRADO";
            break;
    }

    // Mostrar el destino en la salida estándar
    std::cout << "Destino: " << destino << std::endl;
}

int main() {
    int codigoArea;
    std::cout << "Ingrese el codigo de area: ";
    std::cin >> codigoArea;

    // Llamada a la función MostrarDestino
    MostrarDestino(codigoArea);

    return 0;
}

