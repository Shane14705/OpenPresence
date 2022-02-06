#pragma once
#include "openvr_driver.h"

enum class Handedness
{
    left,
    right
};

class GloveDevice :
    public vr::ITrackedDeviceServerDriver
{

    vr::EVRInitError Activate(uint32_t unObjectId) override;
    void Deactivate() override;
    void EnterStandby() override;
    void* GetComponent(const char* pchComponentNameAndVersion) override;
    vr::DriverPose_t GetPose() override;
    void DebugRequest(const char* pchRequest, char* pchResponseBuffer, uint32_t unResponseBufferSize) override;
    uint32_t ovrObjID;
    vr::PropertyContainerHandle_t property_container;
    vr::VRInputComponentHandle_t* skeleton_component = NULL;
public:
    uint32_t get_ovr_obj_id() const
    {
	    return ovrObjID;
    }

public:
    GloveDevice();

    virtual ~GloveDevice();

    
};

