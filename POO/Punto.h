class Punto
{
private:
    int x, y;

public:
    Punto(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    Punto()
    {
        x = y = 0;
    }
    void setX(int valorX);
    void setY(int valorY);
    int getX();
    int getY();
};
