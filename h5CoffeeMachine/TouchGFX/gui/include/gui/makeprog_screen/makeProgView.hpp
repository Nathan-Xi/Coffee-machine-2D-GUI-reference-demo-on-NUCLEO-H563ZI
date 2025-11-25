#ifndef MAKEPROGVIEW_HPP
#define MAKEPROGVIEW_HPP

#include <gui_generated/makeprog_screen/makeProgViewBase.hpp>
#include <gui/makeprog_screen/makeProgPresenter.hpp>

class makeProgView : public makeProgViewBase
{
public:
    makeProgView();
    virtual ~makeProgView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    bool increase = true;
};

#endif // MAKEPROGVIEW_HPP
