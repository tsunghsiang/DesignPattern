#include "Command.hpp"
#include "RemoteControl.hpp"

int main(int argc, char * argv[])
{
    RemoteControl * rc = new RemoteControl();

    delete rc;
    return 0;
}
    
