#include "Command.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFan.hpp"
#include "CeilingFanOnCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "GarageDoorCloseCommand.hpp"
#include "GarageDoorLightOnCommand.hpp"
#include "GarageDoorLightOffCommand.hpp"
#include "RemoteControl.hpp"

int main(int argc, char * argv[])
{
    RemoteControl * rc = new RemoteControl();

    /* Set Light Command for Living Room */
    SPTR_Light roomLight(std::make_shared<Light>("Living Room"));
    SPTR_LightOnCommand roomLightOnCmd(std::make_shared<LightOnCommand>(roomLight));
    SPTR_LightOffCommand roomLightOffCmd(std::make_shared<LightOffCommand>(roomLight));

    /* Set Light Command for Kitchen */
    SPTR_Light kitchenLight(std::make_shared<Light>("Kitchen"));
    SPTR_LightOnCommand kitchenLightOnCmd(std::make_shared<LightOnCommand>(kitchenLight));
    SPTR_LightOffCommand kitchenLightOffCmd(std::make_shared<LightOffCommand>(kitchenLight));

    /* Set CeilingFan for Living Room */
    SPTR_CeilingFan ceilingFan(std::make_shared<CeilingFan>("Living Room"));
    SPTR_CeilingFanOnCommand ceilingFanOnCmd(std::make_shared<CeilingFanOnCommand>(ceilingFan));
    SPTR_CeilingFanOffCommand ceilingFanOffCmd(std::make_shared<CeilingFanOffCommand>(ceilingFan));

    /* Set GarageDoor for Dining Room */
    SPTR_GarageDoor garageDoor(std::make_shared<GarageDoor>("Dining Room"));
    SPTR_GarageDoorOpenCommand garageOpenCmd(std::make_shared<GarageDoorOpenCommand>(garageDoor));
    SPTR_GarageDoorCloseCommand garageCloseCmd(std::make_shared<GarageDoorCloseCommand>(garageDoor));
    SPTR_GarageDoorLightOnCommand garageLightOnCmd(std::make_shared<GarageDoorLightOnCommand>(garageDoor));
    SPTR_GarageDoorLightOffCommand garageLightOffCmd(std::make_shared<GarageDoorLightOffCommand>(garageDoor));

    rc->SetCommand(0, roomLightOnCmd, roomLightOffCmd);
    rc->SetCommand(1, kitchenLightOnCmd, kitchenLightOffCmd);
    rc->SetCommand(2, ceilingFanOnCmd, ceilingFanOffCmd);
    rc->SetCommand(3, garageOpenCmd, garageCloseCmd);
    rc->SetCommand(4, garageLightOnCmd, garageLightOffCmd);

    /* Press On and Off Button */
    rc->OnButtonPushed(0);
    rc->OffButtonPushed(0);
    rc->OnButtonPushed(1);
    rc->OffButtonPushed(1);
    rc->OnButtonPushed(2);
    rc->OffButtonPushed(2);
    rc->OnButtonPushed(3);
    rc->OffButtonPushed(3);
    rc->OnButtonPushed(4);
    rc->OffButtonPushed(4);

    delete rc;
    return 0;
}
    
