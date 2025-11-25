#ifndef GRINDAUTOVIEW_HPP
#define GRINDAUTOVIEW_HPP

#include <gui_generated/grindauto_screen/grindAutoViewBase.hpp>
#include <gui/grindauto_screen/grindAutoPresenter.hpp>

class grindAutoView : public grindAutoViewBase
{
public:
    grindAutoView();
    virtual ~grindAutoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // GRINDAUTOVIEW_HPP
