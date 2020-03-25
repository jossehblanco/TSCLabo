#include <iostream>

void showVector(Vector v){
    cout << "[\t";
    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << "\t";
    }
    cout << "]\n";
}

void showMatrix(Matrix k){

    for(int i = 0; i < k.at(0).size(); i++){
        cout  << "[\t";
        for (int j = 0 ; j < k.size(); j++)
            cout << k.at(i).at(j) << "\t";
        cout  << "]\n";
    }

}
