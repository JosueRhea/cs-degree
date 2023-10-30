#include <iostream>

float get_triangle_area(float base, float height) {
  return (base * height) / 2;
}

float get_square_area(float side) { return side * side; }

float get_circle_area(float radius) {
  const float PI = 3.14159;
  return (radius * radius) * PI;
}

float get_rect_area(float base, float height) { return base * height; }

int main() {
  std::cout << "Seleccione que a que polígono desea calcular el área"
            << std::endl;
  std::cout << "a. Triángulo" << std::endl;
  std::cout << "b. Cuadrado" << std::endl;
  std::cout << "c. Círculo" << std::endl;
  std::cout << "d. Rectángulo" << std::endl;

  char user_selection;
  std::cin >> user_selection;

  switch (user_selection) {
  case 'a': {
    float base, height;
    std::cout << "Ingrese la base" << std::endl;
    std::cin >> base;
    std::cout << "Ingrese la altura" << std::endl;
    std::cin >> height;
    std::cout << "Área = " << get_triangle_area(base, height) << std::endl;
    break;
  }
  case 'b': {
    float side;
    std::cout << "Ingrese el lado" << std::endl;
    std::cin >> side;
    std::cout << "Área = " << get_square_area(side) << std::endl;
    break;
  }
  case 'c': {
    float radius;
    std::cout << "Ingrese el radio" << std::endl;
    std::cin >> radius;
    std::cout << "Área = " << get_circle_area(radius) << std::endl;
    break;
  }
  case 'd': {
    float base, height;
    std::cout << "Ingrese la base" << std::endl;
    std::cin >> base;
    std::cout << "Ingrese la altura" << std::endl;
    std::cin >> height;
    std::cout << "Área = " << get_rect_area(base, height) << std::endl;
    break;
  }
  default:
    std::cout << "Opción inválida" << std::endl;
  }

  return 0;
}
