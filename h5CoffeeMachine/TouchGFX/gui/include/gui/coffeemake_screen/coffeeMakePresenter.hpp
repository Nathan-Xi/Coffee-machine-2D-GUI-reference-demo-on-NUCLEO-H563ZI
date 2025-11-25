#ifndef COFFEEMAKEPRESENTER_HPP
#define COFFEEMAKEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class coffeeMakeView;

class coffeeMakePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    coffeeMakePresenter(coffeeMakeView& v);

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

    virtual ~coffeeMakePresenter() {}
    virtual void menuSelected(int16_t itemSelected);

private:
    coffeeMakePresenter();

    coffeeMakeView& view;
};

#endif // COFFEEMAKEPRESENTER_HPP
