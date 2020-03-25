#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
#include <cstdlib>

using namespace std;
int main() {

    //inicializando matriz de ejemplo
    Matrix example_matrix;
    zeroes(example_matrix, 3);

    example_matrix.at(0).at(0) = 2; example_matrix.at(0).at(1) = 2; example_matrix.at(0).at(2) = 3;
    example_matrix.at(1).at(0) = 4; example_matrix.at(1).at(1) = 5; example_matrix.at(1).at(2) = 6;
    example_matrix.at(2).at(0) = 7; example_matrix.at(2).at(1) = 8; example_matrix.at(2).at(2) = 9;
    int det = determinant(example_matrix);
    if(det != 0 ){
        Matrix inverted;
        invert(example_matrix, inverted);
        showMatrix(inverted);
    }else{
        cout << "ERROR: Determinant cannot be zero. Unable to calculate inverse matrix." << endl;
        return EXIT_FAILURE;
    }
    return 0;
}
