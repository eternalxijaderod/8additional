#pragma once

namespace ts
{
    struct Point
    {
        double x;
        double y;
    };
    class Rectangle
    {
    public:
        RectangleRectangle(Point A, Point B);
        ~Rectangle() {/*std::cout << "Destructor's end" << std::endl;*/}
        
        double Perimeter();
        double Square();
    private:
        //Ultrasecret calculations!
        Point m_P1;
        Point m_P2;
    };
}
