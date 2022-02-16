#include <iostream>
#include <OVR_CAPI.h>
#include <conio.h>


int main()
{
    std::cout << "Hello World!\n";

    ovrResult result = ovr_Initialize(nullptr);

    if (OVR_FAILURE(result))
    {
        std::cout << "Failed to initialize OVR!" << std::endl;
        return 1;
    }

    ovrSession session;
    ovrGraphicsLuid luid;
    result = ovr_Create(&session, &luid);

    if (OVR_FAILURE(result))
    {
        std::cout << "Failed to get OVR session!" << std::endl;
        ovr_Shutdown();
        return 1;
    }

    ovrHmdDesc desc = ovr_GetHmdDesc(session);
    ovrSizei resolution = desc.Resolution;

    ovrTrackingState currentInput = ovr_GetTrackingState(session, 0, ovrTrue);

    while (true)
    {
	    if (_kbhit())
	    {
            break;
	    }

        currentInput = ovr_GetTrackingState(session, 0, ovrTrue);

        std::cout << currentInput.HandPoses[ovrHand_Left].LinearVelocity.x << std::endl;

    }

    ovr_Destroy(session);
    ovr_Shutdown();
}
