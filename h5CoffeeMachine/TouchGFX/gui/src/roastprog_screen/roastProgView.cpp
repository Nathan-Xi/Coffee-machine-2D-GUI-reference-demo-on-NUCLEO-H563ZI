#include <gui/roastprog_screen/roastProgView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

roastProgView::roastProgView()
{

}

void roastProgView::setupScreen()
{
    roastProgViewBase::setupScreen();
}

void roastProgView::tearDownScreen()
{
    roastProgViewBase::tearDownScreen();
}

void roastProgView::handleTickEvent()
{
    int currentValue = lineProg.getValue();
    int max;
    int min;
    lineProg.getRange(min, max);

    if (currentValue == min)
    {
        increase = true;
    }
    else if (currentValue == max)
    {
        increase = false;
        infoProg.setTypedText(TypedText(T_RESOURCEID115));
        buttonBackToMain.setVisible(true);
        infoProg.invalidate();
        buttonBackToMain.invalidate();
    }

    int nextValue = increase == true ? currentValue+1 : currentValue;

    lineProg.setValue(nextValue);
}
