#ifndef CUSTOMIZEPRESENTER_HPP
#define CUSTOMIZEPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class customizeView;

class customizePresenter : public touchgfx::Presenter, public ModelListener
{
public:
    customizePresenter(customizeView& v);

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

    virtual ~customizePresenter() {}

private:
    customizePresenter();

    customizeView& view;
};

#endif // CUSTOMIZEPRESENTER_HPP
