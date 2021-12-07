#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int dim=0;
        //cout<<"inserisci dimensione"<<endl;
        cin>>dim;
        float a[dim];
        for (int i=0; i<dim;i++) {
            //cout << "inserisci valori" << endl;
            cin >> a[i];
        }
        //cout<<"il massimo è"<<endl;
        cout<<funzione(dim, a)<<endl;

  return 0;
}
