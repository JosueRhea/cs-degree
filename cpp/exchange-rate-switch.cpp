#include <iostream>

int main() {
  std::cout << "1. Conversión de dólares a euros" << std::endl;
  std::cout << "2. Conversión de euros a dólares" << std::endl;
  std::cout << "3. Conversión de lempiras a dólares" << std::endl;
  std::cout << "4. Conversión de dólares a lempiras" << std::endl;

  int user_selection;
  std::cin >> user_selection;

  switch (user_selection) {
  case 1: {
    const float exchange_rate = 1.15;
    float dollars;
    std::cout << "Ingrese la cantidad de dólares que desea convertir" << std::endl;
    std::cin >> dollars;
    std::cout << "Resultado: " << dollars / exchange_rate << " euros" << std::endl;
    break;
  }
  case 2:{
    const float exchange_rate = 1.08;
    float euros;
    std::cout << "Ingrese la cantidad de euros que desea convertir" << std::endl;
    std::cin >> euros;
    std::cout << "Resultado: " << euros * exchange_rate << " dólares" << std::endl;
    break;
  }
  case 3:{
    const float exchange_rate = 24.25;
    float lps;
    std::cout << "Ingrese la cantidad de lempiras que desea convertir" << std::endl;
    std::cin >> lps;
    std::cout << "Resultado: " << lps / exchange_rate << " dólares" << std::endl;
    break;
  }
  case 4:{
    const float exchange_rate = 24.08;
    float dollars;
    std::cout << "Ingrese la cantidad de dólares que desea convertir" << std::endl;
    std::cin >> dollars;
    std::cout << "Resultado: " << dollars * exchange_rate << " lempiras" << std::endl;
    break;
  } 
   default:
   std::cout << "Opción inválida" << std::endl;
  }

  return 0;
}
