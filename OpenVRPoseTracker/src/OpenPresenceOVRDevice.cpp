#include "openvr_driver.h"


vr::EVRInitError Activate(uint32_t unObjectId)
{
	vr::PropertyContainerHandle_t property_container = vr::VRProperties()->TrackedDeviceToPropertyContainer(unObjectId);
}