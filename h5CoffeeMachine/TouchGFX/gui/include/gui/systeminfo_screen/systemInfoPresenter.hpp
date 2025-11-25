#ifndef SYSTEMINFOPRESENTER_HPP
#define SYSTEMINFOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class systemInfoView;

class systemInfoPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    systemInfoPresenter(systemInfoView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~systemInfoPresenter() {}

private:
    systemInfoPresenter();

    systemInfoView& view;
};

#endif // SYSTEMINFOPRESENTER_HPP
