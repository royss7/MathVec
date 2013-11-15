/* File     : MathVec.h
 * Discribe : Template MathVec class build in Code::Blocks 10.05 on Ubuntu 12.04 LTS
 * Function : Declaration of the Template class
 * Date     : Nov 4th, 2013
 */

#ifndef _MATHVEC_H_
#define _MATHVEC_H_

#include <cstring>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

class MathVec
{
private :
    vector<int> elem;
public :
    /* Constructor function claster */
    MathVec();
    MathVec(int size, int *data);
    MathVec(const MathVec &a);
    /* Deconstructor */
    ~MathVec();

    size_t Size()
    {
        return elem.size();
    }
    /* 求模函数 */
    double length();

    /* 重载加法运算符、数乘运算符、内积运算符、赋值运算符、下标运算符、插入运算符和提取运算符。 */
    MathVec operator + (MathVec b);
    MathVec operator *(int d);
    friend MathVec operator *(int d, MathVec m);
    int operator *(MathVec b);
    int& operator [](int i)
    {
        return elem[i];
    }
    const int & operator[](int i) const
    {
        return elem[i];
    }
    friend istream& operator >> (istream &input, MathVec &m);
    friend ostream& operator << (ostream &input, MathVec &m);
    MathVec operator = (MathVec m);

};



#endif // _MATHVEC_H_
