#ifndef CIELING_FAN_HPP
#define CIELING_FAN_HPP

#include <iostream>
#include <memory>
#include <string>

class CeilingFan
{
    public:
        enum State { HIGH, MEDIUM, LOW, OFF };

        CeilingFan(std::string location = "");
        ~CeilingFan();
        void High();
        void Medium();
        void Low();
        void Off();
        State GetSpeed();
    private:
        std::string m_location;
        State m_speed;
};

using SPTR_CeilingFan = std::shared_ptr<CeilingFan>;

#endif
