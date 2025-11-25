#ifndef COFFEEMAKEVIEW_HPP
#define COFFEEMAKEVIEW_HPP

#include <gui_generated/coffeemake_screen/coffeeMakeViewBase.hpp>
#include <gui/coffeemake_screen/coffeeMakePresenter.hpp>

class coffeeMakeView : public coffeeMakeViewBase
{
public:
    coffeeMakeView();
    virtual ~coffeeMakeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void scrollWheel1UpdateItem(listElement& item, int16_t itemIndex);
protected:
    Callback<coffeeMakeView, int16_t> scrollWheel1_ItemSelectedCallback;
    void scrollWheel1_ItemSelectedHandler(int16_t itemSelected);
};

#endif // COFFEEMAKEVIEW_HPP
