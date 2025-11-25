#ifndef SYSTEMINFOVIEW_HPP
#define SYSTEMINFOVIEW_HPP

#include <gui_generated/systeminfo_screen/systemInfoViewBase.hpp>
#include <gui/systeminfo_screen/systemInfoPresenter.hpp>

class systemInfoView : public systemInfoViewBase
{
public:
    systemInfoView();
    virtual ~systemInfoView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // SYSTEMINFOVIEW_HPP
