#include <iostream>
using namespace std;

int main(){
    int *vec = nullptr, n;

    for(int i=1; i<=100000; i++){

      n = 1000000;
      vec = new int[n];

      if (vec != nullptr){
        cout << "Tengo memoria disponible" << endl;
      }
      else{
        cout << "No me prestaron" << endl;
      }
      delete []vec;
    }


    cout << "Fin del programa";
    return 0;
}
