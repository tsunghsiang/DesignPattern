#ifndef CIELING_FAN_HPP
#define CIELING_FAN_HPP

#include <iostream>
#include <memory>
#include <string>

class CeilingFan
{
    public:
        CeilingFan(std::string location = "");
        ~CeilingFan();
        void On();
        void Off();
    private:
        std::string m_location;
};

using SPTR_CeilingFan = std::shared_ptr<CeilingFan>;

#endif
