#ifndef SCREENCHECKVIEW_HPP
#define SCREENCHECKVIEW_HPP

#include <gui_generated/screencheck_screen/screenCheckViewBase.hpp>
#include <gui/screencheck_screen/screenCheckPresenter.hpp>

class screenCheckView : public screenCheckViewBase
{
public:
    screenCheckView();
    virtual ~screenCheckView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SCREENCHECKVIEW_HPP
