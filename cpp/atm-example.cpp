#include <iostream>

void show_current_balance() {
  const float balance = 5000.00;
  std::cout << "Su saldo es de " << balance << " lps." << std::endl;
}

void show_deposits() {
  std::cout << "Se le ha depositado 3 veces en esta última quincena"
            << std::endl;
}

void show_withdrawals() {
  const float withdrawals_value = 1500.00;
  std::cout << "Ha retirado una cantidad que será otra constante de Lps."
            << withdrawals_value << " en la última quincena" << std::endl;
}

void service_payments() {
  std::cout << "¿Que pago desea realizar?" << std::endl;
  std::cout << "1. Agua" << std::endl;
  std::cout << "2. Luz" << std::endl;

  int user_selection;
  std::cin >> user_selection;
  switch (user_selection) {
  case 1:
    std::cout << "Pago de agua realizado correctamente" << std::endl;
    break;
  case 2:
    std::cout << "Pago de luz realizado correctamente" << std::endl;
    break;
  default:
    std::cout << "Respuesta inválida" << std::endl;
  }
}

int main() {
  const int PIN = 2023;
  int user_pin;
  std::cout << "Ingrese su PIN" << std::endl;
  std::cin >> user_pin;

  if (PIN != user_pin) {
    std::cout << "PIN inválido" << std::endl;
    return 0;
  }

  std::cout << "Bienvenido a tu cuenta de ahorro en Lempiras, Elija una opción:"
            << std::endl;
  std::cout << "1. Saldo" << std::endl;
  std::cout << "2. Depósitos" << std::endl;
  std::cout << "3. Retiros" << std::endl;
  std::cout << "4. Pago de servicios" << std::endl;
  std::cout << "5. Salir" << std::endl;

  int user_selection;
  std::cin >> user_selection;

  switch (user_selection) {
  case 1:
    show_current_balance();
    break;
  case 2:
    show_deposits();
    break;
  case 3:
    show_withdrawals();
    break;
  case 4:
    service_payments();
    break;
  case 5:
    std::cout << "SALIENDO DEL SISTEMA..." << std::endl;
    break;
  default:
    std::cout << "Opción inválida" << std::endl;
  }

  return 0;
}
