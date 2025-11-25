#include <gui/coffeemake_screen/coffeeMakeView.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

coffeeMakeView::coffeeMakeView():
scrollWheel1_ItemSelectedCallback(this, &coffeeMakeView::scrollWheel1_ItemSelectedHandler)
{

}

void coffeeMakeView::setupScreen()
{
	scrollWheel1.setItemSelectedCallback(scrollWheel1_ItemSelectedCallback);
    coffeeMakeViewBase::setupScreen();
}

void coffeeMakeView::tearDownScreen()
{
    coffeeMakeViewBase::tearDownScreen();
}

void coffeeMakeView::scrollWheel1UpdateItem(listElement& item, int16_t itemIndex)
{
	item.setListElements(itemIndex);
}

void coffeeMakeView::scrollWheel1_ItemSelectedHandler(int16_t itemSelected)
{
	info.invalidate();
		switch (itemSelected)
		{
		case 0:
			info.setTypedText(TypedText(T_RESOURCEID10));
			break;
		case 1:
			info.setTypedText(TypedText(T_RESOURCEID20));
			break;
		case 2:
			info.setTypedText(TypedText(T_RESOURCEID30));
			break;
		case 3:
			info.setTypedText(TypedText(T_RESOURCEID40));
			break;
		case 4:
			info.setTypedText(TypedText(T_RESOURCEID50));
			break;
		case 5:
			info.setTypedText(TypedText(T_RESOURCEID60));
			break;
		case 6:
			info.setTypedText(TypedText(T_RESOURCEID70));
		}
	info.invalidate();
	presenter->menuSelected(itemSelected);
}
