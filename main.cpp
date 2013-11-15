#include <iostream>
#include "MathVec.h"

using namespace std;

int main()
{
    int a[4]= {1,2,3,4};
    int b[4]= {10,20,30,40};
    int c[3]= {1,2,3};
    cout << "constructor : mathvec(int len, inde *data)" << endl;
    MathVec v1(4,a);
    cout << "constructor : mathvec (mathvec) " << endl;
    MathVec v2(v1);
    cout << "operator = " << endl;
    MathVec v3 = v2;

    cout << "module of v1 " << endl;
    cout << v1.length() << endl;

    cout << "operator + : v1 + v2" << endl;
    MathVec v4;
    v4 = v1 + v2;

    cout << v4;
    cout << "operator * : v2 * 5" << endl;
    v4 = v2 * 5;
    v4 = 5 * v2;
    cout << v4;
    v4 = v2;
    cout << v4;

    cout << "operator [] " << endl;
    cout << v4[3] << endl;
    cout << v4;
    //cin >> v4;
    v4[3] = 100;
     cin >> v4;
    cout << v4;


    return 0;
}
