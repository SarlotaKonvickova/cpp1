#ifndef CPP1_OBJEKT_H
#define CPP1_OBJEKT_H

class Objekt {
private:
    int id;
    double x;
    double y;
public:
    Objekt(int id); // parametricky kontruktor
    virtual ~Objekt() {}; //virtualni desktruktor

    double GetX() const;

    double GetY() const;

    double GetId() const;

    void SetX(double aX);

    void SetY(double aY);
};


#endif //CPP1_OBJEKT_H
