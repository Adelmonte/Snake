#ifndef SNAKEOBJECT_H
#define SNAKEOBJECT_H


class SnakeObject
{
    public:
        SnakeObject();
        void update();
        void show();
        void direction(int x, int y);

    protected:

    private:
        int x;
        int y;
        int xSpeed;
        int YSpeed;
        int gridScale;
};

#endif // SNAKEOBJECT_H
