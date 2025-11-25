#ifndef MODEL_HPP
#define MODEL_HPP

class ModelListener;

class Model
{
public:
    Model();

    void bind(ModelListener* listener)
    {
        modelListener = listener;
    }

    void tick();

    void SetmenuSelected(int itemSelected);
    int GetScreenMainMenuScroll1WheelItem(void);
protected:
    ModelListener* modelListener;
    int Screen1Scroll1WheelItemSele;
};

#endif // MODEL_HPP
