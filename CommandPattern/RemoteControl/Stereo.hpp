#ifndef STEREO_HPP
#define STEREO_HPP

#include <iostream>
#include <memory>
#include <string>

class Stereo
{
    public:
        Stereo(std::string location = "");
        ~Stereo();
        void On();
        void Off();
        void SetCD();
        void SetDvd();
        void SetRadio();
        void SetVolume(int volume);
    private:
        std::string m_location;
};

using SPTR_Stereo = std::shared_ptr<Stereo>;

#endif
