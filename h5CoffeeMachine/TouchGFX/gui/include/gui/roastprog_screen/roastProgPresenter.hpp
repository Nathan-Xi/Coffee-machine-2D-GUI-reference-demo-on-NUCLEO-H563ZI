#ifndef ROASTPROGPRESENTER_HPP
#define ROASTPROGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class roastProgView;

class roastProgPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    roastProgPresenter(roastProgView& v);

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

    virtual ~roastProgPresenter() {}

private:
    roastProgPresenter();

    roastProgView& view;
};

#endif // ROASTPROGPRESENTER_HPP
