#include "Q-2_Hybrid.cpp"

int main()
{
    D d1;

    d1.B::setA();
    d1.setB();
    d1.setC();
    d1.setD();

    d1.B::getA();
    d1.getB();
    d1.getC();
    d1.getD();

    d1.sum();
}