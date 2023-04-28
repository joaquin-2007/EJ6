#include <iostream>

// Funci�n que muestra el destino seg�n el c�digo de �rea
void MostrarDestino(int codigoArea) {
    std::string destino; // Variable para almacenar el destino

    // Utilizar un switch para verificar el c�digo de �rea y asignar el destino correspondiente
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

    // Mostrar el destino en la salida est�ndar
    std::cout << "Destino: " << destino << std::endl;
}

int main() {
    int codigoArea;
    std::cout << "Ingrese el codigo de area: ";
    std::cin >> codigoArea;

    // Llamada a la funci�n MostrarDestino
    MostrarDestino(codigoArea);

    return 0;
}

