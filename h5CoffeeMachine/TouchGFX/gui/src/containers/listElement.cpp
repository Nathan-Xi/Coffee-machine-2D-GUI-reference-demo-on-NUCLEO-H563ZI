#include <gui/containers/listElement.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
#include <gui_generated/containers/listElementBase.hpp>
#include <math.h>

listElement::listElement()
{

}

void listElement::initialize()
{
    listElementBase::initialize();
}

void listElement::offset(int16_t x)
{
    label.setX(x);
}

void listElement::alphaAdjust(int16_t a)
{
	label.setAlpha(a);
}
//The new declaration and implementation of the setY() function
void listElement::setY(int16_t y)
{
    //set Y as normal
	listElementBase::setY(y);

    const int circleRadius = 220;

    //center around middle of background
    y = y + getHeight() / 2 - 320 /2;
    int16_t a = 255 - abs( ((getY() + 40) * 255/320) - 127);

    //calculate x
    float x_f = circleRadius - sqrtf((float)((circleRadius * circleRadius) - (y * y)));
    int16_t x = (int16_t)(x_f + 0.5f);
    offset(x);
    alphaAdjust(a);
}

void listElement::setListElements(int item)
{
	switch (item)
	{
	case 0:
		label.setTypedText(TypedText(T_RESOURCEID1));
		break;
	case 1:
		label.setTypedText(TypedText(T_RESOURCEID2));
		break;
	case 2:
		label.setTypedText(TypedText(T_RESOURCEID3));
		break;
	case 3:
		label.setTypedText(TypedText(T_RESOURCEID4));
		break;
	case 4:
		label.setTypedText(TypedText(T_RESOURCEID5));
		break;
	case 5:
		label.setTypedText(TypedText(T_RESOURCEID6));
		break;
	case 6:
		label.setTypedText(TypedText(T_RESOURCEID7));
		break;
	}
}
