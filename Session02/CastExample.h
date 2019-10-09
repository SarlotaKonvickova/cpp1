#ifndef CPP1_CASTEXAMPLE_H
#define CPP1_CASTEXAMPLE_H

class IPrintable
{
public:
    virtual void Print() const = 0; // ciste virtualni metoda
};
class Base
{
public:
    Base(int aId) : Id(aId) {}
    ~Base(){} //destruktor
private:
    int Id;
};

class Extended : public Base, public IPrintable
{
public:
    Extended(int aId) : Base(aId) {}
    virtual void Print() const { std::cout << "extended class" << endl; }
    virtual ~Extended(){}
};

class PrivateClass
{
public:
    PrivateClass(int aValue) : value(aValue){}
private:
    int value;
};
class PublicClass
{
public:
    int value;
};
void CastExample()
{
    /*Extended extended01(3);
    Base* base01 = dynamic_cast<Base*>(&extended01);*/
    Extended extended01 = new Extended(3);
    Base* base01 = dynamic_cast<Base*>(&extended01);
    IPrintable* printable01 = dynamic_cast<IPrintable*>(extended01);
    PrivateClass* private01 = new PrivateClass(3);
    PublicClass* public01 = reinterpret_cast<PublicClass*> PrivateClass(private01);
    std::cout << public01->value << std::endl;
}


#endif //CPP1_CASTEXAMPLE_H
