#include <fstream>
#include <iostream>
#include "fecha.h"
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "Pruebe ./fechas --help para más información" << std::endl;
        exit(EXIT_SUCCESS);
    }

    std::string fichero_entrada{argv[1]};
    std::string fichero_salida{argv[2]};
    
    if (fichero_entrada == "--help") {
        std::cout << "./fechas - Gestion de fechas" << std::endl
        << "Modo de uso: ./fechas fichero_entrada.txt fichero_salida.txt" << std::endl;
        exit(EXIT_SUCCESS);
    }

    std::ifstream entrada (fichero_entrada, std::ifstream::in);
    std::ofstream salida (fichero_salida, std::ofstream::out);

    std::string linea;
    std::stringstream flujo(linea);
    std::string testigo;
    char delimitador{'/'};
    std::vector<Fecha> vector_fechas;
    std::vector<int> numeros;
    while(getline(entrada,linea)) {
        while(getline(flujo,testigo,delimitador)) {
            int current_number{stoi(testigo)};
            numeros.push_back(current_number);
        }
        Fecha fecha_testigo = Fecha(numeros[0],numeros[1],numeros[2]);
        vector_fechas.push_back(fecha_testigo);
    } 
    std::sort(vector_fechas.begin(), vector_fechas.end());
    for(size_t i = 0; i < vector_fechas.size(); ++i) {
        salida << vector_fechas[i].GetDia() << "/" << vector_fechas[i].GetMes()
        <<"/"<< vector_fechas[i].GetAnyo() << std::endl;
    }
}
