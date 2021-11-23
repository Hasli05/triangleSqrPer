using namespace std;
#include <iostream>
#include <math.h>

float sideLenght(float x1, float y1, float x2, float y2)
{
    float side = sqrtf((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return side;
}

float perimeter(float side1, float side2, float side3)
{
    return side1 + side2 + side3;
}

float square(float sP, float side1, float side2, float side3)
{
    float square;
    return square = sqrtf(sP * (sP - side1) * (sP - side2) * (sP - side3));
}


int main()
{
    float x1, y1, x2, y2, x3, y3;
    float side1, side2, side3;
    float sTriangle1, sTriangle2;
    float pTriangle1, pTriangle2;

    cout << "Enter angles first triangle :" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    side1 = sideLenght(x1, y1, x2, y2);
    side2 = sideLenght(x3, y3, x2, y2);
    side3 = sideLenght(x3, y3, x1, y1);

    pTriangle1 = perimeter(side1, side2, side3);
    float sP1 = pTriangle1 / 2;
    sTriangle1 = square(sP1, side1, side2, side3);


    cout << "Enter angles second triangle :" << endl;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    side1 = sideLenght(x1, y1, x2, y2);
    side2 = sideLenght(x3, y3, x2, y2);
    side3 = sideLenght(x3, y3, x1, y1);

    pTriangle2 = perimeter(side1, side2, side3);
    float sP2 = pTriangle2 / 2;
    sTriangle2 = square(sP1, side1, side2, side3);

    if (sTriangle1 > sTriangle2)
    {
        cout << "Square first triagle more" << endl;
    }
    else if (sTriangle2 > sTriangle1)
    {
        cout << "Square second triagle more" << endl;
    }
    else
    {
        cout << "Square triagle equal" << endl;
    }

    if (pTriangle1 > pTriangle2)
    {
        cout << "Perimeter first triangle more" << endl;
    }
    else if (pTriangle2 > pTriangle1)
    {
        cout << "Perimeter second triangle more" << endl;
    }
    else
    {
        cout << "Perimeter triagle equal" << endl;
    }
}


