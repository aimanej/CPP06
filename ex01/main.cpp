#include "Serializer.hpp"

int main()
{

    Data *before = new Data;
    uintptr_t raw = Serializer::serialize(before);
    Data *after = Serializer::deserialize(raw);
    
    std::cout << "raw bit values: " << raw << std::endl;
    
    std::cout << "value: " << before->GetVal() << " initial address: " << before << std::endl;
    std::cout << "value: " << after->GetVal() << " new address: " << after << std::endl;


    delete before;
}