#include <iostream>
// Josue Alvarenga Maldonado No de cuenta 20232030423
int main(){
  std::cout << "Que desea convertir" << std::endl;
  std::cout << "a) Dolares a Lempiras" << std::endl;
  std::cout << "b) Lempiras a Dolares" << std::endl;
 
  std::string user_election;
  std::cin >> user_election;

  float exchange_rate;

  if(user_election == "a"){
    std::cout << "Ingrese la cantidad de dolares" << std::endl;
    float dls;
    std::cin >> dls;
    
    std::cout << "Ingrese la tasa de cambio" << std::endl;
    std::cin >> exchange_rate;
    
    float result = dls * exchange_rate;
    std::cout << result << " Lempiras" << std::endl;
  }else if(user_election == "b"){
    std::cout << "Ingrese la cantidad de lempiras" << std::endl;
    float lps;
    std::cin >> lps;
    
    std::cout << "Ingrese la tasa de cambio" << std::endl;
    std::cin >> exchange_rate;
   
    float result = lps / exchange_rate;
    std::cout << result << " Dolares" << std::endl;
  }else {
    std::cout << "Respuesta invalida" << std::endl;
  }
  
  return 0;
}
