/**
 * Filename:  target.h
 * Created:   2014/10/16 16:48:18
 * Author:    wangzhongtang
 * Description:   
 * 
 **/
#ifndef _TARGET_H
#define _TARGET_H

namespace Adapter
{
    /*
     * Client调用接口
     */
    class IUserInfo
    {
    public:
        virtual std::string name() const = 0;
        virtual std::string mobileNumber() const = 0;
        virtual std::string jobPosition() const = 0;
        virtual std::string officeTelNumber() const = 0;
        virtual std::string homeTelNumber() const = 0;
        virtual std::string homeAddress() const = 0;
        virtual void display() const = 0;
    };

    /*
     * 公司内部人员信息
     */
    class CUserInfo : public IUserInfo
    {
    public:
        CUserInfo();
        CUserInfo(const std::string & name_);
        void setName(const std::string & name_);
        void setMobileNumber(const std::string & number_);
        void setOfficeTelNumber(const std::string & number_);
        void setJobPosition(const std::string & number_);
        void setHomeTelNumber(const std::string & number_);
        void setHomeAddress(const std::string & number_);
        // override
        virtual std::string name() const;
        virtual std::string mobileNumber() const;
        virtual std::string officeTelNumber() const;
        virtual std::string jobPosition() const;
        virtual std::string homeTelNumber() const;
        virtual std::string homeAddress() const;
        virtual void display() const;
    private:
        std::string _name;
        std::string _mobileNumber;
        std::string _officeTelNumber;
        std::string _jobPosition;
        std::string _homeTelNumber;
        std::string _homeAddress;
    };
}

#endif // _TARGET_H

