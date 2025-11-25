#ifndef LISTELEMENT4_HPP
#define LISTELEMENT4_HPP

#include <gui_generated/containers/listElement4Base.hpp>

class listElement4 : public listElement4Base
{
public:
    listElement4();
    virtual ~listElement4() {}
    virtual void initialize();
    void offset(int16_t x);
    void alphaAdjust(int16_t a);
    void colorAdjustGold();
    void colorAdjustGrey();
    virtual void setY(int16_t y);
    void setListElements(int item);
protected:
};

#endif // LISTELEMENT4_HPP
