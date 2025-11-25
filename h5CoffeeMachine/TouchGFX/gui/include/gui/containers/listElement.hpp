#ifndef LISTELEMENT_HPP
#define LISTELEMENT_HPP

#include <gui_generated/containers/listElementBase.hpp>
#include <math.h>

class listElement : public listElementBase
{
public:
    listElement();
    virtual ~listElement() {}
    virtual void initialize();
    void offset(int16_t x);
    void alphaAdjust(int16_t a);
    virtual void setY(int16_t y);
    void setListElements(int item);
protected:
};

#endif // LISTELEMENT_HPP
