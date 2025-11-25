#include <gui/beangrind_screen/beanGrindView.hpp>
#include <gui_generated/beangrind_screen/beanGrindViewBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>

beanGrindView::beanGrindView():
scrollWheel2_ItemSelectedCallback(this, &beanGrindView::scrollWheel2_ItemSelectedHandler)
{

}

void beanGrindView::setupScreen()
{
	scrollWheel2.setItemSelectedCallback(scrollWheel2_ItemSelectedCallback);
    beanGrindViewBase::setupScreen();
}

void beanGrindView::tearDownScreen()
{
    beanGrindViewBase::tearDownScreen();
}

void beanGrindView::scrollWheel2UpdateItem(listElement1& item, int16_t itemIndex)
{
	item.setListElements(itemIndex);
}

void beanGrindView::scrollWheel2_ItemSelectedHandler(int16_t itemSelected)
{
	info.invalidate();
		switch (itemSelected)
		{
		case 0:
			info.setTypedText(TypedText(T_RESOURCEID92));
			enterManual.setVisible(true);
			enterAuto.setVisible(false);
			break;
		case 1:
			info.setTypedText(TypedText(T_RESOURCEID93));
			enterManual.setVisible(false);
			enterAuto.setVisible(true);
			break;
		}
	info.invalidate();
	presenter->menuSelected(itemSelected);
}
