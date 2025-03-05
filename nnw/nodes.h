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
        virtual void _AddInDeg(size_t id, shared_ptr<Node> from, Data weight = 0) = default;
        virtual void _AddOutDeg(shared_ptr<Node> to) = default;

    public:
        static LinkNode(shared_ptr<Node> from, shared_ptr<Node> to, size_t id, Data weight = 0);
    };
}

#endif