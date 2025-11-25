#ifndef LISTELEMENT2_HPP
#define LISTELEMENT2_HPP

#include <gui_generated/containers/listElement2Base.hpp>

class listElement2 : public listElement2Base
{
public:
    listElement2();
    virtual ~listElement2() {}
    virtual void initialize();
    void offset(int16_t x);
    void alphaAdjust(int16_t a);
    void colorAdjustGold();
    void colorAdjustGrey();
    virtual void setY(int16_t y);
    void setListElements(int item);
protected:
};

#endif // LISTELEMENT2_HPP
