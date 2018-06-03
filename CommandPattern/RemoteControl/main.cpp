#include "Command.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
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

    rc->SetCommand(0, roomLightOnCmd, roomLightOffCmd);
    rc->SetCommand(1, kitchenLightOnCmd, kitchenLightOffCmd);

    /* Press On and Off Button */
    rc->OnButtonPushed(0);
    rc->OffButtonPushed(0);
    rc->OnButtonPushed(1);
    rc->OffButtonPushed(1);

    delete rc;
    return 0;
}
    
