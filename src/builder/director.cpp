#include "director.h"

#include "builder.h"

using namespace Builder;

Animal * AnimalDirector::buildAnimal(AnimalBuilder * builder)
{
    if (builder != NULL) {
        builder->createHead();
        builder->createBody();
        builder->createForelegs();
        builder->createHindlges();
    }
    return builder->animal();
}

