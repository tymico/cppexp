#ifndef DIRECTOR_H
#define DIRECTOR_H

namespace Builder
{

    class AnimalBuilder;

    class AnimalDirector
    {
        public:
            Animal * buildAnimal(AnimalBuilder * builder);
    };

}

#endif  // DIRECTOR_H
