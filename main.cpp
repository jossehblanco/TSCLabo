#include <fstream>
#include <iostream>
#include <string>
#include "clases.h"
using namespace std;



void readCoordinates(ifstream &file, int n, item* item_list){
    int e; float r;
    for(int i=0; i<n; i++){
        file >> e >> r;
        item_list[i].setIntFloat(e,r);
    }
}


int main() {
    char filename[12]; //Se cambió al tamaño correcto porque corrompía el stack
    string line;
    mesh m;
    ifstream file;
    float k,Q;
    int nnodes,neltos,ndirich,nneu;

    do{
        cout << "Ingrese el nombre del archivo:" << endl;
        cin >>filename;

        file.open(filename);

    }while(!file);
    file >> k >> Q;
    file >> nnodes >> neltos >> ndirich >> nneu;

    file >> line;

    m.setParameters(k, Q);
    m.setSizes(nnodes, neltos, ndirich, nneu);
    m.createData();

    readCoordinates(file,nnodes,m.getNodes());

    file.close();

    //Mostrando nodos a partir del objeto m
    for(int i = 0; i < m.getSize(NODES); i++){
        cout << m.getNodes()[i].getX() << endl;
    }
    return 0;
}