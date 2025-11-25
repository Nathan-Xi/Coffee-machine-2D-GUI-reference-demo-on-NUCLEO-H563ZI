#include <gui/containers/listElement1.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>
#include <gui_generated/containers/listElement1Base.hpp>
#include <math.h>

listElement1::listElement1()
{

}

void listElement1::initialize()
{
    listElement1Base::initialize();
}

void listElement1::offset(int16_t x)
{
    label.setX(x);
}

void listElement1::alphaAdjust(int16_t a)
{
	label.setAlpha(a);
}
//The new declaration and implementation of the setY() function
void listElement1::setY(int16_t y)
{
    //set Y as normal
	listElement1Base::setY(y);

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

void listElement1::setListElements(int item)
{
	switch (item)
	{
	case 0:
		label.setTypedText(TypedText(T_RESOURCEID90));
		break;
	case 1:
		label.setTypedText(TypedText(T_RESOURCEID91));
		break;
	}
}
