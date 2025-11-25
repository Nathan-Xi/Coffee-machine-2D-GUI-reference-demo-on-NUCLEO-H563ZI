#include <gui/coffeemake_screen/coffeeMakeView.hpp>
#include <gui/coffeemake_screen/coffeeMakePresenter.hpp>

coffeeMakePresenter::coffeeMakePresenter(coffeeMakeView& v)
    : view(v)
{

}

void coffeeMakePresenter::activate()
{

}

void coffeeMakePresenter::deactivate()
{

}

void coffeeMakePresenter::menuSelected(int16_t itemSelected)
{
	model->SetmenuSelected(itemSelected);
}
