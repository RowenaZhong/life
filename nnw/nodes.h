#ifndef NNW_NODES_H
#define NNW_NODES_H
#include "data.h"
namespace nnw
{
    class Node
    {
    private:
        vector<shared_ptr<Node>> _inNodes;
        vector<shared_ptr<Node>> _outNodes;
        size_t _inDeg;
        size_t _outDeg;
        Data _result;
        Data _lamba;
        virtual void _Calc() = default;
        virtual void _BackProp() = default;

    public:
        };
}

#endif