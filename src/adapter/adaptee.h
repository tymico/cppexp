/**
 * Filename:  adaptee.h
 * Created:   2014/10/16 16:47:58
 * Author:    wangzhongtang
 * Description:   
 * 
 **/
#ifndef _ADAPTEE_H
#define _ADAPTEE_H

#include <map>

namespace Adapter
{
    /*
     * 借聘人员信息接口
     */
    class IOuterUser
    {
    public:
        virtual std::map<std::string, std::string> baseInfo() = 0;
        virtual std::map<std::string, std::string> officeInfo() = 0;
        virtual std::map<std::string, std::string> homeInfo() = 0;
    };

    /*
     * 借聘人员信息类实现
     */
    class COuterUser : public IOuterUser
    {
    public:
        void setBaseInfo(const std::string & name_, const std::string & mobileNumber_);
        void setOfficeInfo(const std::string & jobPosition_, const std::string & officeTelNumber_);
        void setHomeInfo(const std::string & homeAddress_, const std::string & homeTelNumber_);
        // override
        virtual std::map<std::string, std::string> baseInfo();
        virtual std::map<std::string, std::string> officeInfo();
        virtual std::map<std::string, std::string> homeInfo();
    private:
        std::map<std::string, std::string> _infoMap;
    };
}

#endif // _ADAPTEE_H

