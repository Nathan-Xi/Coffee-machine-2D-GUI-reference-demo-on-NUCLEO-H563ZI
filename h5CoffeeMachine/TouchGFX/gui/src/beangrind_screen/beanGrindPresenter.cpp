#include <gui/beangrind_screen/beanGrindView.hpp>
#include <gui/beangrind_screen/beanGrindPresenter.hpp>

beanGrindPresenter::beanGrindPresenter(beanGrindView& v)
    : view(v)
{

}

void beanGrindPresenter::activate()
{

}

void beanGrindPresenter::deactivate()
{

}

void beanGrindPresenter::menuSelected(int16_t itemSelected)
{
	model->SetmenuSelected(itemSelected);
}
