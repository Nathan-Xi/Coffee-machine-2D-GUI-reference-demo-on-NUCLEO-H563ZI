#include <gui/makeprog_screen/makeProgView.hpp>
#include <texts/TextKeysAndLanguages.hpp>

makeProgView::makeProgView()
{

}

void makeProgView::setupScreen()
{
    makeProgViewBase::setupScreen();
}

void makeProgView::tearDownScreen()
{
    makeProgViewBase::tearDownScreen();
}

void makeProgView::handleTickEvent()
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
        infoProg.setTypedText(TypedText(T_RESOURCEID80));
        buttonBackToMain.setVisible(true);
        infoProg.invalidate();
        buttonBackToMain.invalidate();
    }

    int nextValue = increase == true ? currentValue+1 : currentValue;

    lineProg.setValue(nextValue);
}
