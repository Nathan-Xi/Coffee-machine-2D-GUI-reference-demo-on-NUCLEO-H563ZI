#include <gui/customize_screen/customizeView.hpp>

customizeView::customizeView():
sliderSugarValueStartedChangeCallback(this, &customizeView::sliderSugarValueStartedChangeCallbackHandler),
sliderSugarValueChangedCallback(this, &customizeView::sliderSugarValueChangedCallbackHandler),
sliderSugarValueConfirmedCallback(this, &customizeView::sliderSugarValueConfirmedCallbackHandler)
{

}

void customizeView::setupScreen()
{
    customizeViewBase::setupScreen();
    sliderSugar.setStartValueCallback(sliderSugarValueStartedChangeCallback);
    sliderSugar.setNewValueCallback(sliderSugarValueChangedCallback);
    sliderSugar.setStopValueCallback(sliderSugarValueConfirmedCallback);
}

void customizeView::tearDownScreen()
{
    customizeViewBase::tearDownScreen();
}

void customizeView::sliderSugarValueStartedChangeCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderSugar)
    {
        //execute code whenever the slider starts changing value.
    	touchgfx::Unicode::snprintf(sugarIndicatorBuffer,10,"%i", value);
    	sugarIndicator.invalidate();
    }
}

void customizeView::sliderSugarValueChangedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderSugar)
    {
        //execute code whenever the value of the slider changes.
    	touchgfx::Unicode::snprintf(sugarIndicatorBuffer,10,"%i", value);
    	sugarIndicator.invalidate();
    }
}

void customizeView::sliderSugarValueConfirmedCallbackHandler(const touchgfx::Slider& src, int value)
{
    if (&src == &sliderSugar)
    {
        //execute code whenever the slider stops the changing value.
    	touchgfx::Unicode::snprintf(sugarIndicatorBuffer,10,"%i", value);
    	sugarIndicator.invalidate();
    }
}
