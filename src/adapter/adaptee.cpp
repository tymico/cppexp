#include "adaptee.h"


namespace Adapter
{

    void COuterUser::setBaseInfo(const std::string & name_, const std::string & mobileNumber_)
    {
        _infoMap["name"] = name_;
        _infoMap["mobileNumber"] = mobileNumber_;
    }

    void COuterUser::setOfficeInfo(const std::string & jobPosition_, const std::string & officeTelNumber_)
    {
        _infoMap["jobPosition"] = jobPosition_;
        _infoMap["officeTelNumber"] = officeTelNumber_;
    }

    void COuterUser::setHomeInfo(const std::string & homeAddress_, const std::string & homeTelNumber_)
    {
        _infoMap["homeAddress"] = homeAddress_;
        _infoMap["homeTelNumber"] = homeTelNumber_;
    }

    std::map<std::string, std::string> COuterUser::baseInfo()
    {
        std::map<std::string, std::string> result;
        result["name"] = _infoMap["name"];
        result["mobileNumber"] = _infoMap["mobileNumber"];
        return result;
    }

    std::map<std::string, std::string> COuterUser::officeInfo()
    {
        std::map<std::string, std::string> result;
        result["jobPosition"] = _infoMap["jobPosition"];
        result["officeTelNumber"] = _infoMap["officeTelNumber"];
        return result;
    }

    std::map<std::string, std::string> COuterUser::homeInfo()
    {
        std::map<std::string, std::string> result;
        result["homeAddress"] = _infoMap["homeAddress"];
        result["homeTelNumber"] = _infoMap["homeTelNumber"];
        return result;
    }

}
