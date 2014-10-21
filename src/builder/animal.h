#ifndef ANIMAL_H
#define ANIMAL_H

namespace Builder
{

    // 
    class Animal
    {
        public:
            void setHead(const std::string & val);
            void setBody(const std::string & val);
            void setForelegs(const std::string & val);
            void setHindlegs(const std::string & val);
            std::string getHead() const;
            std::string getBody() const;
            std::string getForelegs() const;
            std::string getHindlegs() const;
        private:
            std::string _head;
            std::string _body;
            std::string _forelegs;
            std::string _hindlegs;
    };

    // 
    class Dog : public Animal
    {

    };

}

#endif  // ANIMAL_H
