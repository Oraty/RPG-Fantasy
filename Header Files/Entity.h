#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

class Entity
{

    public:
        bool colission();

    private:
        float _speed;
        std::string name;
        float velocity;

};

#endif // ENTITY_H_INCLUDED
