#ifndef ROASTPROGVIEW_HPP
#define ROASTPROGVIEW_HPP

#include <gui_generated/roastprog_screen/roastProgViewBase.hpp>
#include <gui/roastprog_screen/roastProgPresenter.hpp>

class roastProgView : public roastProgViewBase
{
public:
    roastProgView();
    virtual ~roastProgView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
protected:
    bool increase = true;
};

#endif // ROASTPROGVIEW_HPP
