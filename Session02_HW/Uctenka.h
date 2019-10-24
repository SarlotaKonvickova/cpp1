#ifndef CPP1_UCTENKA_H
#define CPP1_UCTENKA_H

class Uctenka {
private:
    int cisloUctenky;
    double castka;
    double dph;
public:
    void zobrazUctenku();
    int getCisloUctenky() const;
    double getCastka() const;
    double getDph() const;

    void setCisloUctenky(int cisloUctenky);
    void setCastka(double castka);
    void setDph(double dph);
};



#endif //CPP1_UCTENKA_H
