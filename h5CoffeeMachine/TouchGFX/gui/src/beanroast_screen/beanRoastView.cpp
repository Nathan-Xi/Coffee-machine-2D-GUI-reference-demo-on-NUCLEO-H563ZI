#include <gui/beanroast_screen/beanRoastView.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <BitmapDatabase.hpp>


beanRoastView::beanRoastView()
{

}

void beanRoastView::setupScreen()
{
    beanRoastViewBase::setupScreen();
}

void beanRoastView::tearDownScreen()
{
    beanRoastViewBase::tearDownScreen();
}

void beanRoastView::scrollWheel1UpdateItem(listElement2& item, int16_t itemIndex)
{
	item.setListElements(itemIndex);
}

void beanRoastView::scrollWheel2UpdateItem(listElement3& item, int16_t itemIndex)
{
	item.setListElements(itemIndex);
}

void beanRoastView::scrollWheel3UpdateItem(listElement4& item, int16_t itemIndex)
{
	item.setListElements(itemIndex);
}
