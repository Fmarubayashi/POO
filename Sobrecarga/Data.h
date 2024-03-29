#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <iomanip>
using namespace std;
class Data
{
public:
    // operadores relacionais
    bool operator>(const Data &right) const;
    bool operator>=(const Data &right) const;
    bool operator<(const Data &right) const;
    bool operator<=(const Data &right) const;
    bool operator==(const Data &right) const;
    bool operator!=(const Data &right) const;
    // funcao friend (impressaão usando cout)
    friend ostream &operator<<(ostream &os, const Data &obj);
    // funcao friend (leitura usando cin)
    friend istream &operator>>(istream &is, Data &obj);

private:
    int compare(Data outra) const;
    int dia, mes, ano;
};
#endif /* DATA_H */