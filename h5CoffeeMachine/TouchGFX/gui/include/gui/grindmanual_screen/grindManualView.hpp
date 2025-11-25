#ifndef GRINDMANUALVIEW_HPP
#define GRINDMANUALVIEW_HPP

#include <gui_generated/grindmanual_screen/grindManualViewBase.hpp>
#include <gui/grindmanual_screen/grindManualPresenter.hpp>

class grindManualView : public grindManualViewBase
{
public:
    grindManualView();
    virtual ~grindManualView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // GRINDMANUALVIEW_HPP
