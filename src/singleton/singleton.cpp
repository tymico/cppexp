#include "singleton.h"


namespace Singleton
{

    class Test : public CSingleton<Test>
    {
        DECLARE_SINGLETON(Test)
        public:
            void setValue(const std::string & val) {
                _val = val;
            }
            std::string getValue() {
                return _val;
            }
        private:
            std::string _val;
    };

    void test() {
        // CSingleton begin
        std::cout << "\t> Singleton >" << std::endl;

        Test::instance()->setValue("num 1");
        std::cout << Test::instance()->getValue() << std::endl;

        std::cout << "\t< Singleton <" << std::endl;
    }


}
