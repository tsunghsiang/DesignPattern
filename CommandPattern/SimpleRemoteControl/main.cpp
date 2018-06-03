#include "Command.hpp"
#include "SimpleRemoteControl.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "GarageDoorCloseCommand.hpp"
#include "GarageDoorLightOnCommand.hpp"
#include "GarageDoorLightOffCommand.hpp"
#include <memory>

int main(int argc, char * argv[])
{
    /* Initialize Remote Control Instance */
    SimpleRemoteControl * src = new SimpleRemoteControl();
   
    SPTR_Light light(std::make_shared<Light>());
    /* Execute Light On Command */
    SPTR_LightOnCommand lightOnCmd(std::make_shared<LightOnCommand>(light));
    src->SetCommand(lightOnCmd);
    src->PressButton();
    /* Execute Light Off Command */
    SPTR_LightOffCommand lightOffCmd(std::make_shared<LightOffCommand>(light));
    src->SetCommand(lightOffCmd);
    src->PressButton();

    SPTR_GarageDoor garageDoor(std::make_shared<GarageDoor>());
    /* Execute GarageDoor Open Command */
    SPTR_GarageDoorOpenCommand garageOpenCmd(std::make_shared<GarageDoorOpenCommand>(garageDoor));
    src->SetCommand(garageOpenCmd);
    src->PressButton();
    /* Execute GarageDoor Close Command */
    SPTR_GarageDoorCloseCommand garageCloseCmd(std::make_shared<GarageDoorCloseCommand>(garageDoor));
    src->SetCommand(garageCloseCmd);
    src->PressButton();
    /* Execute GarageDoor LightOn Commadn */
    SPTR_GarageDoorLightOnCommand garageLightOnCmd(std::make_shared<GarageDoorLightOnCommand>(garageDoor));
    src->SetCommand(garageLightOnCmd);
    src->PressButton();
    /* Execute GarageDoor LightOff Command */
    SPTR_GarageDoorLightOffCommand garageLightOffCmd(std::make_shared<GarageDoorLightOffCommand>(garageDoor));
    src->SetCommand(garageLightOffCmd);
    src->PressButton();

    delete src;    
    return 0;
}
