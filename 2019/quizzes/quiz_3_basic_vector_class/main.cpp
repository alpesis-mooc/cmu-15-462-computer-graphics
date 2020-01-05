#include <cmath>
#include <cassert>
#include <iostream>
using namespace std;

#include "vector.hpp"

// Test --- this function checks the value of each vector method against
// known (correct) reference values.  Note that this is not a formal guarantee
// that the methods are correctly implemented; just a spot check that things
// are on the right track.
void test()
{
   // Constants used for testing
   Vector<3> u{ 1., 2., 3. };
   Vector<3> v{ 3., 1., 2. };
   Vector<3> w{ 5., 3., 7. };
   double a = 4.;

   // Print out the constants
   cout << "u: " << u << endl;
   cout << "v: " << v << endl;
   cout << "w: " << w << endl;
   cout << "a: " << a << endl;
   cout << endl;

   // Check each method, keeping track of how many passed
   int nPassed = 0;

   cout << "u+v (addition)" << endl;
   nPassed += check( u+v, Vector<3>{4,3,5} );

   cout << "u-v (subtraction)" << endl;
   nPassed += check( u-v, Vector<3>{-2,1,1} );

   cout << "u*a (right scalar multiplication)" << endl;
   nPassed += check( u*a, Vector<3>{4,8,12} );

   cout << "norm(u) (Euclidean norm)" << endl;
   nPassed += check( norm(u), 3.74166 );

   cout << "inner(u,v) (inner product)" << endl;
   nPassed += check( inner(u,v), 11. );

   cout << "cross(u,v) (cross product)" << endl;
   nPassed += check( cross(u,v), Vector<3>{1,7,-5} );

   cout << "det(u,v,w) (determinant)" << endl;
   nPassed += check( det(u,v,w), -9. );

   cout << "a*u (left scalar multiplication)" << endl;
   nPassed += check( a*u, Vector<3>{4,8,12} );

   cout << "PASSED " << nPassed << " OF 8 TESTS" << endl;
}

int main()
{
   test();
   
   return 0;
}

