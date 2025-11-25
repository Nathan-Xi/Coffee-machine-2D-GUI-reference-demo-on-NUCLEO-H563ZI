#include <gui/containers/listElement4.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
#include <gui_generated/containers/listElement4Base.hpp>
#include <math.h>
#include <stdlib.h>
#include <touchgfx/Color.hpp>

listElement4::listElement4()
{

}

void listElement4::initialize()
{
    listElement4Base::initialize();
}

void listElement4::offset(int16_t x)
{
    label.setX(x + 31);
}

void listElement4::alphaAdjust(int16_t a)
{
	label.setAlpha(a);
}

void listElement4::colorAdjustGold()
{
	label.setColor(touchgfx::Color::getColorFromRGB(60,180,230));
	label.invalidate();
}

void listElement4::colorAdjustGrey()
{
	label.setColor(touchgfx::Color::getColorFromRGB(203,197,197));
	label.invalidate();
}
//The new declaration and implementation of the setY() function
void listElement4::setY(int16_t y)
{
    //set Y as normal
	listElement4Base::setY(y);
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

void listElement4::setListElements(int item)
{
	switch (item)
	{
	case 0:
		label.setTypedText(TypedText(T_RESOURCEID113));
		break;
	case 1:
		label.setTypedText(TypedText(T_RESOURCEID114));
		break;
	}
}
