#ifndef MAKEPROGPRESENTER_HPP
#define MAKEPROGPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class makeProgView;

class makeProgPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    makeProgPresenter(makeProgView& v);

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

    virtual ~makeProgPresenter() {}

private:
    makeProgPresenter();

    makeProgView& view;
};

#endif // MAKEPROGPRESENTER_HPP
