#ifndef HEURE_H
#define HEURE_H

class Heure {
private:
    int heures;
    int minutes;

public:
    Heure();
    Heure(int h, int m);

    int getHeures() const;
    int getMinutes() const;

    void setHeures(int h);
    void setMinutes(int m);

    void affiche() const;
};

#endif
