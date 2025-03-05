#include "nodes.h"

namespace nnw
{
    Node::LinkNode(shared_ptr<Node> from, shared_ptr<Node> to, size_t id, Data weight)
    {
        from->_AddOutDeg(to);
        to->_AddInDeg(id, from, weight);
    }
}