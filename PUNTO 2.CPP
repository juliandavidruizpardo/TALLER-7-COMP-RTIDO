/*T07E01::ESCRIBIR UN PROGRAMA EN VISUAL C++, QUE DESPLIEGUE LOS RESULTADOS 
DE SIGUIENTES EXPRESIONES:
Escribir un programa en Visual C++, que despliegue los resultados de las siguientes expresiones:
• 15 dividido 7
• Residuo de 12 dividido 5
• Cubo de 11
• Raíz cúbica de 1331
• Raíz cuadrada de 25
• Seno de 2p / 6
NOMBRE: JULIAN DAVID RUIZ PARDO, VALENTINA MONTAÑA, SANTIAGO VARGAS 
ASIGNATURA:PROGRAMACION l*/
#include <iostream>
  using namespace std;
int
main ()
{
  cout << "15 dividido 7 = " << 15 / 7 << endl;
  cout << "15.0 dividido 7 = " << 15.0 / 7 << endl;
  cout << "residuo de 12 dividido 5 = " << 12 % 5 << endl;
  cout << "cubo de 11 = " << pow (11, 3) << endl;
  cout << "raiz cC:bica de 1331 = " << cbrt (1331) << endl;
  cout << "raiz cuadrada de 25 = " << sqrt (25) << endl;
  return 0;
  }