#ifndef NNETWORK_ARGUMENTS_H
#define NNETWORK_ARGUMENTS_H

#include "data.h"
namespace nnw
{
    class Arguments
    {
        Data _data;
        bool _isConstant;

    public:
        Arguments();
        Arguments(const Data data, const bool isConstant = true);
        void UpdateData(Data &data, bool upd = true);
        bool IsConstant();
    };
}

#endif // NNETWORK_ARGUMENTS_H