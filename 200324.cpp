//Nombre: Santos Díaz Fernando Emmanuel
// Grupo: MT 13
// Fecha: 13/03/24
//

#include <iostream>
#include"Eigen/Dense"

using namespace std;
using namespace Eigen;

int main()
{
    
    MatrixXd A(3, 3);
    A << 1, 2, 3,
        4, 5, 6,
        7, 8, 9;
    cout << A;
    cout << endl;
    cout << endl;

    MatrixXd B(3, 3);
    B << -1, 0, -1,
        2, 1, 5,
        1, 1, 1;
    cout << B;
    cout << endl;
    cout << endl;

    MatrixXd C(4, 4);
    C << 6, 2, 3, 5,
        8, 3, 6, 6,
        7, 8, 1, 7,
        8,2, 3, 6;
    cout << C;
    cout << endl;
    cout << endl;




    cout << "C = A + B" << endl;
    C = A + B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A - B" << endl;
    C = A - B;
    cout << C;
    cout << endl;
    cout << endl;


    cout << "C = 100* B" << endl;
    C = 100* B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "C = A*B" << endl;
    C = A * B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "det(A)=" << endl;
    cout << A.determinant();
    cout << endl;
    cout << endl;

    cout << "trans(A)=" << endl;
    cout << A.transpose();
    cout << endl;
    cout << endl;


    cout << "conj(A)=" << endl;
    cout << A.conjugate();
    cout << endl;
    cout << endl;


    cout << "inv(A)=" << endl;
    cout << A.inverse();
    cout << endl;
    cout << endl;

    cout << "adj(A)=" << endl;
    cout << A.adjoint();
    cout << endl;
    cout << endl;
   
    
}
