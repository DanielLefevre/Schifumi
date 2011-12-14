#ifndef JOUEUR_H
#define JOUEUR_H


class Joueur
{
    public:
        Joueur();
        virtual ~Joueur();
        Coup& obtenir_coup();
    protected:
    private:
};

#endif // JOUEUR_H
