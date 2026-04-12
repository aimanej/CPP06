#ifndef DATA_HPP
#define DATA_HPP

class Data
{
private:
    int value;

public:
    Data();
    Data(const Data &obj);
    Data &operator=(const Data &obj);
    Data(int num);
    ~Data();
    int GetVal() const;
    void SetVal(int num);
};

#endif