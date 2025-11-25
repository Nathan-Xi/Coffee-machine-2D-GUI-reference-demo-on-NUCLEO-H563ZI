#ifndef LISTELEMENT3_HPP
#define LISTELEMENT3_HPP

#include <gui_generated/containers/listElement3Base.hpp>

class listElement3 : public listElement3Base
{
public:
    listElement3();
    virtual ~listElement3() {}
    virtual void initialize();
    void offset(int16_t x);
    void alphaAdjust(int16_t a);
    void colorAdjustGold();
    void colorAdjustGrey();
    virtual void setY(int16_t y);
    void setListElements(int item);
protected:
};

#endif // LISTELEMENT3_HPP
