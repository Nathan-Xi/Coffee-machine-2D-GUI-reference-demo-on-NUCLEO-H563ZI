#include <gui/containers/listElement2.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
#include <gui_generated/containers/listElement2Base.hpp>
#include <math.h>
#include <stdlib.h>
#include <touchgfx/Color.hpp>

listElement2::listElement2()
{

}

void listElement2::initialize()
{
    listElement2Base::initialize();
}

void listElement2::offset(int16_t x)
{
    label.setX(x + 31);
}

void listElement2::alphaAdjust(int16_t a)
{
	label.setAlpha(a);
}

void listElement2::colorAdjustGold()
{
	label.setColor(touchgfx::Color::getColorFromRGB(60,180,230));
	label.invalidate();
}

void listElement2::colorAdjustGrey()
{
	label.setColor(touchgfx::Color::getColorFromRGB(203,197,197));
	label.invalidate();
}
//The new declaration and implementation of the setY() function
void listElement2::setY(int16_t y)
{
    //set Y as normal
	listElement2Base::setY(y);
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

void listElement2::setListElements(int item)
{
	switch (item)
	{
	case 0:
		label.setTypedText(TypedText(T_RESOURCEID100));
		break;
	case 1:
		label.setTypedText(TypedText(T_RESOURCEID101));
		break;
	case 2:
		label.setTypedText(TypedText(T_RESOURCEID102));
		break;
	case 3:
		label.setTypedText(TypedText(T_RESOURCEID103));
		break;
	case 4:
		label.setTypedText(TypedText(T_RESOURCEID104));
		break;
	case 5:
		label.setTypedText(TypedText(T_RESOURCEID105));
		break;
	case 6:
		label.setTypedText(TypedText(T_RESOURCEID106));
		break;
	case 7:
		label.setTypedText(TypedText(T_RESOURCEID107));
		break;
	case 8:
		label.setTypedText(TypedText(T_RESOURCEID108));
		break;
	case 9:
		label.setTypedText(TypedText(T_RESOURCEID109));
		break;
	}
}
