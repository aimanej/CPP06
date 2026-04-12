#include "Data.hpp"


Data::Data()
{
    value = 1337;
}
Data::Data(int num)
{
    value = num;
}

Data::Data(const Data &obj)
{
    if(this != &obj)
        value = obj.GetVal();
}

Data &Data::operator=(const Data &obj)
{
    if(this != &obj)
        value = obj.GetVal();
    return *this;    
}

Data::~Data(){}


int Data::GetVal() const
{
    return value;
}

void Data::SetVal(int num)
{
    value = num;
}