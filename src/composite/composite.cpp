#include "composite.h"


namespace Composite
{

    Comp::Comp(Comp * parent_)
        : _parent(parent_)
    {
    }

    Comp::Comp(const std::string & name_, Comp * parent_)
        : _name(name_)
        , _parent(parent_)
    {
    }

    std::string Comp::name() const
    {
        return _name;
    }

    void Comp::setName(const std::string & name_)
    {
        _name = name_;
    }

    Comp * Comp::parent()
    {
        return _parent;
    }

    void Comp::setParent(Comp * parent_)
    {
        _parent = parent_;
    }


    ////////////////////////////////////////
    Company::Company(Comp * parent_)
        : Comp(parent_)
    {
    }

    Company::Company(const std::string & name_, Comp * parent_)
        : Comp(name_, parent_)
    {
    }

    Company::~Company()
    {
        std::list<Comp *>::iterator i = _children.begin();
        for (; i != _children.end(); ++i) {
            delete (*i);
        }
    }

    void Company::addChild(Comp * child)
    {
        if (child == NULL) {
            return;
        }
        child->setParent(this);
        _children.push_back(child);
    }

    void Company::display(int depth) const
    {
        std::string str(depth, '-');
        str = str + name();
        std::cout << str << std::endl;
        std::list<Comp *>::const_iterator i = _children.begin();
        for (; i != _children.end(); ++i) {
            Comp * c = *i;
            if (c != NULL) {
                c->display(depth + 1);
            }
        }
    }

    void Company::lineOfDuty()
    {
        std::list<Comp *>::iterator i = _children.begin();
        for (; i != _children.end(); ++i) {
            Comp * c = *i;
            if (c != NULL) {
                c->lineOfDuty();
            }
        }
    }


    ////////////////////////////////////////
    HRDepartment::HRDepartment(Comp * parent_)
        : Comp(parent_)
    {
    }

    HRDepartment::HRDepartment(const std::string & name_, Comp * parent_)
        : Comp(name_, parent_)
    {
    }

    void HRDepartment::display(int depth) const
    {
        std::string str(depth, '-');
        str = str + name();
        std::cout << str << std::endl;
    }

    void HRDepartment::lineOfDuty()
    {
        if (_parent) {
            std::cout << _parent->name();
        }
        std::cout << name() << " 员工招聘培训管理" << std::endl;
    }


    ////////////////////////////////////////
    FinanceDepartment::FinanceDepartment(Comp * parent_)
        : Comp(parent_)
    {
    }

    FinanceDepartment::FinanceDepartment(const std::string & name_, Comp * parent_)
        : Comp(name_, parent_)
    {
    }

    void FinanceDepartment::display(int depth) const
    {
        std::string str(depth, '-');
        str = str + name();
        std::cout << str << std::endl;
    }

    void FinanceDepartment::lineOfDuty()
    {
        if (_parent) {
            std::cout << _parent->name();
        }
        std::cout << name() << " 公司财务收支管理" << std::endl;
    }


    ////////////////////////////////////////
    void test()
    {
        std::cout << "\t> Composite >" << std::endl;
        Company * root = new Company("北京公司总部");
        root->addChild(new HRDepartment("人力资源部"));
        root->addChild(new FinanceDepartment("财务部"));

        Company * comp1 = new Company("上海华东分公司");
        root->addChild(comp1);
        comp1->addChild(new HRDepartment("人力资源部"));
        comp1->addChild(new FinanceDepartment("财务部"));

        Company * comp2 = new Company("南京办事处");
        comp1->addChild(comp2);
        comp2->addChild(new HRDepartment("人力资源部"));
        comp2->addChild(new FinanceDepartment("财务部"));

        Company * comp3 = new Company("杭州办事处");
        comp1->addChild(comp3);
        comp3->addChild(new HRDepartment("人力资源部"));
        comp3->addChild(new FinanceDepartment("财务部"));

        std::cout << "公司结构：" << std::endl;
        root->display(0);

        std::cout << "职责: " << std::endl;
        root->lineOfDuty();

        std::cout << "\t< Composite <" << std::endl;
    }

}

