#ifndef CUSTOMIZEVIEW_HPP
#define CUSTOMIZEVIEW_HPP

#include <gui_generated/customize_screen/customizeViewBase.hpp>
#include <gui/customize_screen/customizePresenter.hpp>

class customizeView : public customizeViewBase
{
public:
    customizeView();
    virtual ~customizeView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
    /*
     * Callback Declarations
     */
    touchgfx::Callback<customizeView, const touchgfx::Slider&, int> sliderSugarValueStartedChangeCallback;
    touchgfx::Callback<customizeView, const touchgfx::Slider&, int> sliderSugarValueChangedCallback;
    touchgfx::Callback<customizeView, const touchgfx::Slider&, int> sliderSugarValueConfirmedCallback;

    /*
     * Callback Handler Declarations
     */
    void sliderSugarValueStartedChangeCallbackHandler(const touchgfx::Slider& src, int value);
    void sliderSugarValueChangedCallbackHandler(const touchgfx::Slider& src, int value);
    void sliderSugarValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value);

};

#endif // CUSTOMIZEVIEW_HPP
