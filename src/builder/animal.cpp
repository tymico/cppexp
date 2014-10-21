#include "animal.h"


namespace Builder
{

    void Animal::setHead(const std::string & val)
    {
        _head = val;
    }

    void Animal::setBody(const std::string & val)
    {
        _body = val;
    }

    void Animal::setForelegs(const std::string & val)
    {
        _forelegs = val;
    }

    void Animal::setHindlegs(const std::string & val)
    {
        _hindlegs = val;
    }

    std::string Animal::getHead() const
    {
        return _head;
    }

    std::string Animal::getBody() const
    {
        return _body;
    }

    std::string Animal::getForelegs() const
    {
        return _forelegs;
    }

    std::string Animal::getHindlegs() const
    {
        return _hindlegs;
    }



}
