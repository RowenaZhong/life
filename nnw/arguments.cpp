#include "arguments.h"

namespace nnw
{
    Arguments::Arguments()
    {
        this->_data = 0;
        this->_isConstant = true;
    }

    Arguments::Arguments(const Data data, const bool isConstant = true)
    {
        this->_data = data;
        this->_isConstant = isConstant;
    }
    void Arguments::UpdateData(Data &data, bool upd = true)
    {
        if (upd)
            this->_data = data;
        else
            data = this->_data;
    }
}