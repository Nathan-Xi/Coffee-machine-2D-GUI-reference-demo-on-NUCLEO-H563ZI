#ifndef GRINDAUTOPRESENTER_HPP
#define GRINDAUTOPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class grindAutoView;

class grindAutoPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    grindAutoPresenter(grindAutoView& v);

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

    virtual ~grindAutoPresenter() {}

private:
    grindAutoPresenter();

    grindAutoView& view;
};

#endif // GRINDAUTOPRESENTER_HPP
