/*Programa realizado por: Roberto Carlos Lopez Perez
 *Estructura de datos
 *Ingenieria en sistemas computacionales
 *Quinto semestre
 *Instituto Tecnologico Superior de Jalisco "Mario Molina" Campus Zapopan
 */

#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void getInto();
void insertionMiddle();
void search();

int numberToFind;

struct Serie{
    int serieNumbers[10];

    struct Serie *next;
}*first=NULL, *final=NULL, *aux=NULL, *previous=NULL;


int main() {

/*    srand(0); //se establece el valor semilla de la funcion srand;
    aux=new Serie;

    for(int i=1; i<=10; i++){
       cout<<"insert a number: ";
            cin>>aux->serieNumbers[i];
        //aux->serie[i]=rand()%100; //aqui se llena mi arreglo con numero aleatorios con numero entre 0 y 49
    }

    search();*/
    getInto();
    search();
    return 0;
}

void getInto(){

    aux=new Serie;

    if(aux){
        for(int i=1; i<=10; i++){
            cout<<"insert a number: ";
            cin>>aux->serieNumbers[i];
            //aux->serie[i]=rand()%100; //aqui se llena mi arreglo con numero aleatorios con numero entre 0 y 49
        }
        aux->next=NULL;

        if(first==NULL){
            first=aux;
            final=aux;
        }
        else{
            final ->next=aux;
            final=aux;
        }
    }
    else{
        cout<<"there was an error in memory";
    }
}

void search(){


    cout<<"which number're looking for?: ";
        cin>>numberToFind;

    if(first==NULL){
        cout<<"the list is empty";
        return;
    }
    else{
        while(aux!=NULL){
            for(int i=1; i<=10; i++){
                if(aux->serieNumbers[i]==numberToFind) {
                    cout << "number " << numberToFind << " found";
                    return;
                }

            }
            aux=aux->next;
        }
        cout<<"the number is not in the list";
    }

    /*for(int j=1; j<=10; j++){
        cout<<"["<<aux->serie[j]<<"]"<<"\t"; //aqui imprimo mi arreglo ya lleno con numero aleatorios entre 0 y 100

    }*/

}

