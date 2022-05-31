#ifndef STREAM_INSERTABLE_H
#define STREAM_INSERTABLE_H
#include <iostream>

// this is an interface because it doesn't have any member, only pure virtual functions (no implementation)
class StreamInsertable
{
    friend std::ostream &operator<<(std::ostream &out, const StreamInsertable &operand);

public:
    virtual void stream_insert(std::ostream &out) const = 0;
};

#endif // STREAM_INSERTABLE_H