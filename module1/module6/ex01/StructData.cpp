#include "StructData.hpp"

StructData::StructData(void *Data){
    this->_Data = Data;
}

StructData::StructData(StructData &copy){
    *this = copy;
}

StructData &StructData::operator=(StructData &obj){
    this->_Data = obj.getData();
    return (*this);
}



void *StructData::getData(){
    return (this->_Data);
}

StructData::~StructData(){
}

StructData::StructData(){}