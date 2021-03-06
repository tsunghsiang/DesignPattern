#include "Command.hpp"
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFan.hpp"
#include "CeilingFanHighCommand.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanLowCommand.hpp"
#include "CeilingFanOffCommand.hpp"
#include "GarageDoor.hpp"
#include "GarageDoorOpenCommand.hpp"
#include "GarageDoorCloseCommand.hpp"
#include "GarageDoorLightOnCommand.hpp"
#include "GarageDoorLightOffCommand.hpp"
#include "Stereo.hpp"
#include "StereoRadioOnCommand.hpp"
#include "StereoRadioOffCommand.hpp"
#include "StereoCdOnCommand.hpp"
#include "StereoCdOffCommand.hpp"
#include "StereoDvdOnCommand.hpp"
#include "StereoDvdOffCommand.hpp"
#include "MacroCommand.hpp"
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
    SPTR_CeilingFanHighCommand ceilingFanHighCmd(std::make_shared<CeilingFanHighCommand>(ceilingFan));
    SPTR_CeilingFanOffCommand ceilingFanOffCmd(std::make_shared<CeilingFanOffCommand>(ceilingFan));

    /* Set GarageDoor for Dining Room */
    SPTR_GarageDoor garageDoor(std::make_shared<GarageDoor>("Dining Room"));
    SPTR_GarageDoorOpenCommand garageOpenCmd(std::make_shared<GarageDoorOpenCommand>(garageDoor));
    SPTR_GarageDoorCloseCommand garageCloseCmd(std::make_shared<GarageDoorCloseCommand>(garageDoor));
    SPTR_GarageDoorLightOnCommand garageLightOnCmd(std::make_shared<GarageDoorLightOnCommand>(garageDoor));
    SPTR_GarageDoorLightOffCommand garageLightOffCmd(std::make_shared<GarageDoorLightOffCommand>(garageDoor));

    /* Set Stereo for Lobby */
    SPTR_Stereo stereo(std::make_shared<Stereo>("Lobby"));
    SPTR_StereoCdOnCommand stereoCdOnCmd(std::make_shared<StereoCdOnCommand>(stereo));
    SPTR_StereoCdOffCommand stereoCdOffCmd(std::make_shared<StereoCdOffCommand>(stereo));
    SPTR_StereoDvdOnCommand stereoDvdOnCmd(std::make_shared<StereoDvdOnCommand>(stereo));
    SPTR_StereoDvdOffCommand stereoDvdOffCmd(std::make_shared<StereoDvdOffCommand>(stereo));
    SPTR_StereoRadioOnCommand stereoRadioOnCmd(std::make_shared<StereoRadioOnCommand>(stereo));
    SPTR_StereoRadioOffCommand stereoRadioOffCmd(std::make_shared<StereoRadioOffCommand>(stereo));

    rc->SetCommand(0, roomLightOnCmd, roomLightOffCmd);
    rc->SetCommand(1, kitchenLightOnCmd, kitchenLightOffCmd);
    rc->SetCommand(2, ceilingFanHighCmd, ceilingFanOffCmd);
    rc->SetCommand(3, garageOpenCmd, garageCloseCmd);
    rc->SetCommand(4, garageLightOnCmd, garageLightOffCmd);
    rc->SetCommand(5, stereoCdOnCmd, stereoCdOffCmd);
    rc->SetCommand(6, stereoDvdOnCmd, stereoDvdOffCmd);
    rc->SetCommand(7, stereoRadioOnCmd, stereoRadioOffCmd);

    /* Press On and Off Button One at a Time*/
    std::cout << "----------------- Press On and Off Button One at a Time ----------------\n\n";
    rc->OnButtonPushed(0);
    rc->OffButtonPushed(0);
//    rc->UndoButtonPushed();
    rc->OnButtonPushed(1);
    rc->OffButtonPushed(1);
//   rc->UndoButtonPushed();
    rc->OnButtonPushed(2);
    rc->OffButtonPushed(2);
//    rc->UndoButtonPushed();
    rc->OnButtonPushed(3);
    rc->OffButtonPushed(3);
//    rc->UndoButtonPushed();
    rc->OnButtonPushed(4);
    rc->OffButtonPushed(4);
//    rc->UndoButtonPushed();
    rc->OnButtonPushed(5);
    rc->OffButtonPushed(5);
//    rc->UndoButtonPushed();
    rc->OnButtonPushed(6);
    rc->OffButtonPushed(6);
//    rc->UndoButtonPushed();
    rc->OnButtonPushed(7);
    rc->OffButtonPushed(7);
//    rc->UndoButtonPushed();

    /* Party Mode */
    std::list<SPTR_Command> partyOnCmd, partyOffCmd;
    std::cout << "\n---------------- Step into Party Mode ----------------\n\n";
    
    partyOnCmd.push_back(roomLightOnCmd);
    partyOnCmd.push_back(ceilingFanHighCmd);
    partyOnCmd.push_back(garageOpenCmd);
    partyOnCmd.push_back(garageLightOnCmd);
    partyOnCmd.push_back(stereoRadioOnCmd);
    
    partyOffCmd.push_back(roomLightOffCmd);
    partyOffCmd.push_back(ceilingFanOffCmd);
    partyOffCmd.push_back(garageCloseCmd);
    partyOffCmd.push_back(garageLightOffCmd);
    partyOffCmd.push_back(stereoRadioOffCmd);
    
    SPTR_MacroCommand partyOnMacro(std::make_shared<MacroCommand>(partyOnCmd));
    SPTR_MacroCommand partyOffMacro(std::make_shared<MacroCommand>(partyOffCmd));

    rc->SetCommand(8, partyOnMacro, partyOffMacro);
    std::cout << "--- Pushing Macro On ---\n\n";
    rc->OnButtonPushed(8);
    std::cout << "\n--- Pushing Macro Off ---\n\n";
    rc->OffButtonPushed(8);
    std::cout << "\n--- Pusing Macro Undo ---\n\n";
    rc->UndoButtonPushed();

    delete rc;
    return 0;
}
    
