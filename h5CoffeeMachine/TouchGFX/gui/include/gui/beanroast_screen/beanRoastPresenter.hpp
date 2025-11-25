#ifndef BEANROASTPRESENTER_HPP
#define BEANROASTPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class beanRoastView;

class beanRoastPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    beanRoastPresenter(beanRoastView& v);

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

    virtual ~beanRoastPresenter() {}

private:
    beanRoastPresenter();

    beanRoastView& view;
};

#endif // BEANROASTPRESENTER_HPP
