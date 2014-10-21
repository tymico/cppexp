#include "prototype.h"

namespace Prototype
{

    CResume::CResume()
    {
        std::cout << "CResume::construct" << std::endl;
    }

    CResume::CResume(const std::string & name)
        : _name(name)
    {
        std::cout << "CResume::construct$name" << std::endl;
    }

    CResume::CResume(const CResume & other)
    {
        std::cout << "CResume::construct$CResume" << std::endl;
        _name = other._name;
        _sex = other._sex;
        _age = other._age;
        _time_area = other._time_area;
        _company = other._company;
    }

    void CResume::setName(const std::string & name)
    {
        _name = name;
    }

    void CResume::setPersonalInfo(const std::string & sex, int age)
    {
        _sex = sex;
        _age = age;
    }

    void CResume::setWorkExperience(const std::string & timeArea, const std::string & company)
    {
        _time_area = timeArea;
        _company = company;
    }

    void CResume::display() const
    {
        std::cout << _name << " " << _sex << " " << _age << std::endl;
        std::cout << _time_area << "工作经历： " << _company << std::endl;
    }

    CCloneable * CResume::clone()
    {
        return new CResume(*this);
    }

    // client
    void test()
    {
        std::cout << "\t> Prototype >" << std::endl;
        CResume * ra = new CResume("小明");
        ra->setPersonalInfo("男", 22);
        ra->setWorkExperience("1998-2000", "XX公司");
        CResume * rb = dynamic_cast<CResume *>(ra->clone());
        rb->setWorkExperience("1998-2000", "YY公司");
        CResume * rc = dynamic_cast<CResume *>(ra->clone());
        rc->setName("小红");
        rc->setPersonalInfo("女", 21);
        ra->display();
        rb->display();
        rc->display();
        DELETE_S(ra);
        DELETE_S(rb);
        DELETE_S(rc);
        std::cout << "\t< Prototype <" << std::endl;
    }

}   // ns Prototype

