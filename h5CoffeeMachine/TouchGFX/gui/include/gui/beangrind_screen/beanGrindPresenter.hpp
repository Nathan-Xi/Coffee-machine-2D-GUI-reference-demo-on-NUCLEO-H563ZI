#ifndef BEANGRINDPRESENTER_HPP
#define BEANGRINDPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class beanGrindView;

class beanGrindPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    beanGrindPresenter(beanGrindView& v);

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

    virtual ~beanGrindPresenter() {}
    virtual void menuSelected(int16_t itemSelected);

private:
    beanGrindPresenter();

    beanGrindView& view;
};

#endif // BEANGRINDPRESENTER_HPP
