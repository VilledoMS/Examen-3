#include <iostream>
using namespace std;
/**Inicializamos la funcion que vamos a usar para calcular el factorial del numero que quiera el usuario**/
int factorial(int);

int main()
{
    /**Creamos nuestras variables para los menus**/
    int opcion,opcion2;
    cout<<"Menu:"<<endl;
    cout<<"1.factorial"<<endl;
    cout<<"2.Cajero"<<endl;
    cout<<"Elige una opcion: ";
    cin>>opcion;
    /**Aqui dependiendo de lo que eligio el usuario accederemos al factorial o al cajero**/
    switch (opcion){
        case 1:
            /**Declaramos la variable de nuestro numero, ademas de asignarle un valor**/
            int num;
            cout<<"Dame un numero: ";
            cin >> num;
            /**Creamos un mensaje en pantalla donde aqui mismo se llamara a la funcion "Factorial", con la variable num que declaramos y le dimos un valor con anterioridad**/
            cout <<"Factorial de "<<num<<" es: "<<factorial(num)<<endl;
            return 0;
        
        case 2:
            /**Creamos las variables del cajero y damos otro menu**/
            double saldo;
            saldo=20000;
            double retirar;
            cout<<"Menu de Cajero:"<<endl;
            cout<<"1.Consultar Saldo"<<endl;
            cout<<"2.Retirar efectivo"<<endl;
            cout<<"Elige una opcion: ";
            cin>>opcion2;
            /**Dependiendo de lo que eliga nuestro usuario haremos una cosa u otra**/
            switch(opcion2){
                case 1:
                    /**Aqui nomas mostramos el saldo**/
                    cout<<"Su saldo es de: "<<saldo;
                    return 0;
                case 2:
                    /**Aqui retiramos el dinero y preguntamos si el usuario desea ver lo que le quedo de saldo**/
                    cout<<"Cuanto desea retirar?"<<endl;
                    cin>>retirar;
                    if(retirar>saldo){
                        cout<<"Saldo insuficiente"<<endl;
                        return 0;
                    }
                    saldo=saldo-retirar;
                    cout<<"Deseas ver tu saldo actual?"<<endl;
                    cout<<"1.Si Ó 2.No"<<endl;
                    int desicion;
                    cin>>desicion;
                    switch(desicion){
                        case 1:
                            cout<<"Su saldo es de: "<<saldo;
                            return 0;
                        default:
                            return 0;
                    }
                        
                default:
                    cout<<"Error";
                    return 0;
            }
            
        default:
            cout<<"Error";
            return 0;
    }
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
