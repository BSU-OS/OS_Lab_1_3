
#include"../StaticLib/Number.h"
namespace dl {
    class  Vector2D
    {
    private:
        sl::Number X, Y;
    public:
        ~Vector2D();
        Vector2D();
        Vector2D(sl::Number, sl::Number);
        Vector2D(const Vector2D&);
        sl::Number getX()const;
        sl::Number getY()const;
        void setX(sl::Number);
        void setY(sl::Number);
        Vector2D& operator +=(Vector2D&);
        sl::Number getF()const;
        sl::Number getR()const;
         friend std::ostream& operator << (std::ostream&, const Vector2D&);
         friend std::istream& operator >> (std::istream&, Vector2D&);
    };
     Vector2D operator + (Vector2D, Vector2D);
    static const Vector2D Zero(0, 0);
    static const Vector2D One(1, 1);
}
