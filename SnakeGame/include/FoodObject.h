#ifndef FOODOBJECT_H
#define FOODOBJECT_H


class FoodObject
{
    public:
        FoodObject();
        void setX(int xCoordinate);
        void SetY(int yCoordinate);
    protected:

    private:
        int x;
        int y;
};

#endif // FOODOBJECT_H
