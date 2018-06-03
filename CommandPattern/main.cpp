#include "Command.hpp"
#include "SimpleRemoteControl.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include <memory>

int main(int argc, char * argv[])
{
    SimpleRemoteControl * src = new SimpleRemoteControl();
    SPTR_Light light(std::make_shared<Light>());
    SPTR_LightOnCommand lightOnCmd(std::make_shared<LightOnCommand>(light));
    src->SetCommand(lightOnCmd);
    src->PressButton();
    delete src;    
    return 0;
}
