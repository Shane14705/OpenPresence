#include "GloveDevice.h"


GloveDevice::GloveDevice()
{
}

GloveDevice::~GloveDevice()
{
}


// ------------------------------------
// Management Methods
// ------------------------------------
/** This is called before an HMD is returned to the application. It will always be
* called before any display or tracking methods. Memory and processor use by the
* ITrackedDeviceServerDriver object should be kept to a minimum until it is activated.
* The pose listener is guaranteed to be valid until Deactivate is called, but
* should not be used after that point. */
vr::EVRInitError GloveDevice::Activate(uint32_t unObjectId)
{
	ovrObjID = unObjectId;
	property_container = vr::VRProperties()->TrackedDeviceToPropertyContainer(ovrObjID);

	vr::VRProperties()->SetStringProperty(property_container, vr::Prop_InputProfilePath_String, "glove/")


}



/** This is called when The VR system is switching from this Hmd being the active display
* to another Hmd being the active display. The driver should clean whatever memory
* and thread use it can when it is deactivated */
void GloveDevice::Deactivate()
{
}

/** Handles a request from the system to put this device into standby mode. What that means is defined per-device. */
void GloveDevice::EnterStandby()
{
}


/** Requests a component interface of the driver for device-specific functionality. The driver should return NULL
* if the requested interface or version is not supported. */
void* GloveDevice::GetComponent(const char* pchComponentNameAndVersion)
{
	return nullptr;
}


/** A VR Client has made this debug request of the driver. The set of valid requests is entirely
* up to the driver and the client to figure out, as is the format of the response. Responses that
* exceed the length of the supplied buffer should be truncated and null terminated */
void GloveDevice::DebugRequest(const char* pchRequest, char* pchResponseBuffer, uint32_t unResponseBufferSize)
{
}


// ------------------------------------
// Tracking Methods
// ------------------------------------
vr::DriverPose_t GloveDevice::GetPose()
{
}










