#ifndef BEANROASTVIEW_HPP
#define BEANROASTVIEW_HPP

#include <gui_generated/beanroast_screen/beanRoastViewBase.hpp>
#include <gui/beanroast_screen/beanRoastPresenter.hpp>

class beanRoastView : public beanRoastViewBase
{
public:
    beanRoastView();
    virtual ~beanRoastView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void scrollWheel1UpdateItem(listElement2& item, int16_t itemIndex);
    virtual void scrollWheel2UpdateItem(listElement3& item, int16_t itemIndex);
    virtual void scrollWheel3UpdateItem(listElement4& item, int16_t itemIndex);
protected:
};

#endif // BEANROASTVIEW_HPP
