#ifndef FUNCTIONSELECTVIEW_HPP
#define FUNCTIONSELECTVIEW_HPP

#include <gui_generated/functionselect_screen/functionSelectViewBase.hpp>
#include <gui/functionselect_screen/functionSelectPresenter.hpp>

class functionSelectView : public functionSelectViewBase
{
public:
    functionSelectView();
    virtual ~functionSelectView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // FUNCTIONSELECTVIEW_HPP
