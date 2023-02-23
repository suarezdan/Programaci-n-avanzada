#include <cstdlib>
#include <iostream>
using namespace std;

struct resultados{
  int max_valor;
  int size_array;
  int *int_array;
};

//Inicio funcion
resultados CrearVectorAleatorio();
//Centro
int main(){ 
//Se asignan las variables
resultados valor; 
//Se asignan los valores
int op, i, j, x;
bool flag = true;

//Data
  cout << "¡ Bienvenid@ !" << endl;
  cout << endl;
  cout << "--- Inicio ---" << endl;
  cout << "Ingrese 0: para cerrar el programa" << endl;
  cout << "Ingrese 1: para iniciar un vector aleatorio" << endl;
  cout << "Ingrese 2: para ver la matriz histograma" << endl;
//Codigo de desarrollo
 while(flag){
  cin >> op;
  switch(op){
    case 0:
      cout << "Adios" << endl;
      return 0;
    break;
    case 1:
      valor = CrearVectorAleatorio();
      valor.max_valor = valor.int_array[0];
      for(i = 0; i < valor.size_array; i++){
        if(valor.max_valor < valor.int_array[i]){
          valor.max_valor = valor.int_array[i];
        }
      }
      cout << "\n Mayor: " << valor.max_valor << endl;
      cout << "Tamaño: " << valor.size_array << endl;
     break;
    case 2:
      cout << "P \tDato \tHistograma\n";
          for(i = 0; i < valor.size_array;           i++){
                cout << i;
                cout << "\t";
                cout << valor.int_array[i] <<" \t";
                cout << " \t";
            for(x = 1; x <= valor.int_array[i]; x++){
              cout << "*";
            }
                cout << endl;
            }
     break;
    //Se asigna un margen de error al momento de digitar
    default:
    cout <<"Error, datos mal digitados"<<endl;
    break;
    }
  }
  return 0;
 }


resultados CrearVectorAleatorio(){
    resultados res;
  cout << "Ingrese cantidad de datos: ";
  cin >> res.size_array;
  res.int_array = new int [res.size_array];
  for (int i = 0; i<res.size_array; i++){
    *(res.int_array+i) = (rand() % 21);
    cout << *(res.int_array+i) << " ";
  }
  return res;
  
}