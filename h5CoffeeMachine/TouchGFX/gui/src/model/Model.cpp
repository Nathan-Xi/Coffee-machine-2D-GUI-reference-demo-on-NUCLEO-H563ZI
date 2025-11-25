#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model() : modelListener(0)
{

}

void Model::tick()
{

}

void Model::SetmenuSelected(int itemSelected)
{
	Screen1Scroll1WheelItemSele = itemSelected;
}

int Model::GetScreenMainMenuScroll1WheelItem(void)
{
	return Screen1Scroll1WheelItemSele;

}
