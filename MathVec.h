/* File     : MathVec.h
 * Discribe : Template MathVec class build in Code::Blocks 10.05 on Ubuntu 12.04 LTS
 * Function : Implementation of the Template class
 * Date     : Nov 4th, 2013
 */

#include "MathVec.h"

MathVec::MathVec()
{
}

MathVec::MathVec(int len, int *data)
{
    for (int index = 0; index < len; ++ index)
    {
        elem.push_back(data[index]);
    }
}

MathVec::MathVec(const MathVec &a)
{
    elem = a.elem;
}


MathVec::~MathVec()
{
}


/* 计算向量长度 */
double MathVec::length()
{
    int temp = 0;
    for (size_t index = 0; index < elem.size(); ++index)
    {
        temp += elem[index] * elem[index];
    }
    return sqrt((double)temp);
}

MathVec MathVec::operator + (MathVec b)
{

    if (elem.size() != b.elem.size())
    {
        cerr << "Error : the 2 vector have different dimension!" << endl;
        exit(EXIT_FAILURE);
    }
    MathVec temp(b);
    for(size_t i = 0; i < temp.Size(); ++i)
    {
        temp.elem[i] = b.elem[i] + elem[i];
    }
    return temp;

}
MathVec MathVec::operator *(int d)
{
    MathVec temp(*this);
    for(size_t i = 0; i < elem.size(); ++i)
    {
        temp.elem[i] = d * elem[i];
    }
    return temp;
}
MathVec operator *(int d, MathVec m)
{
    MathVec temp(m);
    for(size_t i = 0; i < m.Size(); ++i)
    {
        temp.elem[i] = d * m.elem[i];
    }
    return temp;
}


int MathVec::operator *(MathVec b)
{
    if (elem.size() != b.elem.size())
    {
        cerr << "Error : the 2 vector have different dimension!" << endl;
        exit(EXIT_FAILURE);
    }
    int temp = 0;
    for(size_t i = 0; i < elem.size(); ++i)
    {
        temp += elem[i] * b.elem[i];
    }
    return temp;
}

istream& operator >> (istream &input, MathVec &m)
{
    int temp;
    input >> temp;
    m.elem.push_back(temp);
    /*

    for(size_t i = 0; i < m.Size(); ++i)
    {
        input >> m.elem[i];
    } */
    return input;
}

ostream& operator << (ostream &output, MathVec &m)
{
    for (size_t i = 0 ; i  < m.elem.size(); ++i)
    {
        output << m[i] << "\t";
    }
    output << endl;
    return output;
}


MathVec MathVec::operator = (MathVec m)
{
    this->elem = m.elem;
    return *this;
}
