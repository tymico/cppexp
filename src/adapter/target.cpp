#include "target.h"

namespace Adapter
{

    CUserInfo::CUserInfo()
    {

    }

    CUserInfo::CUserInfo(const std::string & name_)
        : _name(name_)
    {

    }

    void CUserInfo::setName(const std::string & name_)
    {
        _name = name_;
    }

    void CUserInfo::setMobileNumber(const std::string & number_)
    {
        _mobileNumber = number_;
    }

    void CUserInfo::setOfficeTelNumber(const std::string & number_)
    {
        _officeTelNumber = number_;
    }

    void CUserInfo::setJobPosition(const std::string & number_)
    {
        _jobPosition = number_;
    }

    void CUserInfo::setHomeTelNumber(const std::string & number_)
    {
        _homeTelNumber = number_;
    }

    void CUserInfo::setHomeAddress(const std::string & number_)
    {
        _homeAddress = number_;
    }

    void CUserInfo::display() const
    {
        std::cout << name()
            << "\n  " << mobileNumber()
            << "\n  " << jobPosition()
            << "\n  " << officeTelNumber()
            << "\n  " << homeTelNumber()
            << "\n  " << homeAddress() << std::endl;
    }

    std::string CUserInfo::name() const
    {
        return _name;
    }

    std::string CUserInfo::mobileNumber() const
    {
        return _mobileNumber;
    }

    std::string CUserInfo::officeTelNumber() const
    {
        return _officeTelNumber;
    }

    std::string CUserInfo::jobPosition() const
    {
        return _jobPosition;
    }

    std::string CUserInfo::homeTelNumber() const
    {
        return _homeTelNumber;
    }

    std::string CUserInfo::homeAddress() const
    {
        return _homeAddress;
    }

}
