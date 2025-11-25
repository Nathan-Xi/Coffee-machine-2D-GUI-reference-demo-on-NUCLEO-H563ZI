#include <gui/containers/listElement3.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
#include <gui_generated/containers/listElement3Base.hpp>
#include <math.h>
#include <stdlib.h>
#include <touchgfx/Color.hpp>

listElement3::listElement3()
{

}

void listElement3::initialize()
{
    listElement3Base::initialize();
}

void listElement3::offset(int16_t x)
{
    label.setX(x + 19);
}

void listElement3::alphaAdjust(int16_t a)
{
	label.setAlpha(a);
}

void listElement3::colorAdjustGold()
{
	label.setColor(touchgfx::Color::getColorFromRGB(60,180,230));
	label.invalidate();
}

void listElement3::colorAdjustGrey()
{
	label.setColor(touchgfx::Color::getColorFromRGB(203,197,197));
	label.invalidate();
}
//The new declaration and implementation of the setY() function
void listElement3::setY(int16_t y)
{
    //set Y as normal
	listElement3Base::setY(y);
    if (y == 40){
    	colorAdjustGold();
    }else{
    	colorAdjustGrey();
    }
    //center around middle of background
    y = y + getHeight() / 2 - 120 /2;
    int16_t a = 255 - abs( ((getY() + 20) * 255/120) - 127);

    alphaAdjust(a);
}

void listElement3::setListElements(int item)
{
	switch (item)
	{
	case 0:
		label.setTypedText(TypedText(T_RESOURCEID110));
		break;
	case 1:
		label.setTypedText(TypedText(T_RESOURCEID111));
		break;
	case 2:
		label.setTypedText(TypedText(T_RESOURCEID112));
		break;
	}
}
