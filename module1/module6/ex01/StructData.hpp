#include <iostream>


struct StructData {
    public:
        StructData(void *data);
        StructData();
        void *getData();
        ~StructData();

    private:
        void *_Data;
        StructData& operator=(StructData &copy);
        StructData(StructData &obj);
};