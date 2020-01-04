#include <iostream>
#include "eigen/Eigen/Dense"

using namespace std;
using namespace Eigen;


// 1.2 x + 3.4 y + 5.6 z = 36.4
// 7.8 x + 9.0 y + 1.2 z = 87.6
// 3.4 x + 5.6 y + 7.8 z = 62.8
int main()
{
    Matrix3f A;
    Vector3f b;

    A << 1.2,3.4,5.6, 7.8,9.0,1.2, 3.4,5.6,7.8;
    b << 36.4, 87.6, 62.8;

    cout << "Here is the matrix A:\n" << A << endl;
    cout << "Here is the vector b:\n" << b << endl;

    Vector3f x = A.colPivHouseholderQr().solve(b);
    cout << "The solution is:\n" << x << endl;
}
