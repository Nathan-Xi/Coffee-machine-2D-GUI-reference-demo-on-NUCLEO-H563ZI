#ifndef LISTELEMENT1_HPP
#define LISTELEMENT1_HPP

#include <gui_generated/containers/listElement1Base.hpp>
#include <math.h>

class listElement1 : public listElement1Base
{
public:
    listElement1();
    virtual ~listElement1() {}
    virtual void initialize();
    void offset(int16_t x);
    void alphaAdjust(int16_t a);
    virtual void setY(int16_t y);
    void setListElements(int item);
protected:
};

#endif // LISTELEMENT1_HPP
