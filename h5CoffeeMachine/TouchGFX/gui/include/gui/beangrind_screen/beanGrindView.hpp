#ifndef BEANGRINDVIEW_HPP
#define BEANGRINDVIEW_HPP

#include <gui_generated/beangrind_screen/beanGrindViewBase.hpp>
#include <gui/beangrind_screen/beanGrindPresenter.hpp>

class beanGrindView : public beanGrindViewBase
{
public:
    beanGrindView();
    virtual ~beanGrindView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void scrollWheel2UpdateItem(listElement1& item, int16_t itemIndex);
protected:
    Callback<beanGrindView, int16_t> scrollWheel2_ItemSelectedCallback;
    void scrollWheel2_ItemSelectedHandler(int16_t itemSelected);
};

#endif // BEANGRINDVIEW_HPP
