#include <iostream>
// Nombre: Josue Alvarenga Maldonado. No de Cuenta 20232030423

int main(){
  float grade1, grade2, grade3;

  std::cout << "Inserte la primera nota" << std::endl;
  std::cin >> grade1;

  std::cout << "Inserte la segunda nota" << std::endl;
  std::cin >> grade2;
  
  std::cout << "Inserte la tercera nota" << std::endl;
  std::cin >> grade3;

  float result = (grade1 + grade2 + grade3) / 3;

  // Uso el ternary operator para hacer el if else en una linea y que quede mas limpio
  std::string message = result >= 65 ? "Aprobado" : "Reprobado";

  std::cout << message << std::endl;

  return 0;
}
