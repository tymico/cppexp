#include "adapter.h"


namespace Adapter
{

    COuterUserInfo::COuterUserInfo(IOuterUser * user)
        : _user(user)
    {
    }

    std::string COuterUserInfo::name() const
    {
        if (_user == NULL) {
            return std::string();
        }
        std::map<std::string, std::string> baseInfo = _user->baseInfo();
        return baseInfo["name"];
    }

    std::string COuterUserInfo::mobileNumber() const
    {
        if (_user == NULL) {
            return std::string();
        }
        std::map<std::string, std::string> baseInfo = _user->baseInfo();
        return baseInfo["mobileNumber"];
    }

    std::string COuterUserInfo::officeTelNumber() const
    {
        if (_user == NULL) {
            return std::string();
        }
        std::map<std::string, std::string> baseInfo = _user->officeInfo();
        return baseInfo["officeTelNumber"];
    }

    std::string COuterUserInfo::jobPosition() const
    {
        if (_user == NULL) {
            return std::string();
        }
        std::map<std::string, std::string> baseInfo = _user->officeInfo();
        return baseInfo["jobPosition"];
    }

    std::string COuterUserInfo::homeTelNumber() const
    {
        if (_user == NULL) {
            return std::string();
        }
        std::map<std::string, std::string> baseInfo = _user->homeInfo();
        return baseInfo["homeTelNumber"];
    }

    std::string COuterUserInfo::homeAddress() const
    {
        if (_user == NULL) {
            return std::string();
        }
        std::map<std::string, std::string> baseInfo = _user->homeInfo();
        return baseInfo["homeAddress"];
    }

    void COuterUserInfo::display() const
    {
        std::cout << "姓名 " << name()
            << "\n  手机 " << mobileNumber()
            << "\n  职位 " << jobPosition()
            << "\n  办公电话 " << officeTelNumber()
            << "\n  家庭地址 " << homeTelNumber()
            << "\n  家庭电话 " << homeAddress() << std::endl;
    }


    // client
    void test()
    {
        std::cout << "\t> Adapter >" << std::endl;
        // 预备借聘人员信息
        COuterUser user1;
        user1.setBaseInfo("小明", "11111");
        user1.setOfficeInfo("经理", "21111");
        user1.setHomeInfo("南通", "31111");
        COuterUser user2;
        user2.setBaseInfo("小红", "11112");
        user2.setOfficeInfo("前台", "21112");
        user2.setHomeInfo("青岛", "31112");

        COuterUserInfo info1(&user1);
        COuterUserInfo info2(&user2);
        // 实际调用
        info1.display();
        info2.display();

        std::cout << "\t< Adapter <" << std::endl;
    }

}   // ns Adapter

