#include <iostream>
using namespace std;
/**Inicializamos la funcion que vamos a usar para calcular el factorial del numero que quiera el usuario**/
int factorial(int);

int main()
{
    /**Declaramos la variable de nuestro numero, ademas de asignarle un valor**/
    int num;
    cin >> num;
    /**Creamos un mensaje en pantalla donde aqui mismo se llamara a la funcion "Factorial", con la variable num que declaramos y le dimos un valor con anterioridad**/
    cout <<"Factorial de "<<num<<" es: "<<factorial(num)<<endl;
    return 0;
}
/**Iniciamos la funcion y le cambiamos el nombre a nuestra variable num, por unicamente n**/
int factorial(int n)
{
    /**Creamos un if por si nuestro numero es igual a 0 se devolvera un 1**/
    if (n==0)
        return 1;
    /**En cambio si no es igual a 0, se hara nuestra operacion para calcular el factorial y así devolver el mismo valor que nos salga**/
    else
         return n*factorial(n-1);
}
