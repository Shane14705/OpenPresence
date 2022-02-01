#pragma once
#include "openvr_driver.h"

class GloveDevice :
    public vr::ITrackedDeviceServerDriver
{

    vr::EVRInitError Activate(uint32_t unObjectId) override;
    void Deactivate() override;
    void EnterStandby() override;
    void* GetComponent(const char* pchComponentNameAndVersion) override;
    vr::DriverPose_t GetPose() override;
    void DebugRequest(const char* pchRequest, char* pchResponseBuffer, uint32_t unResponseBufferSize) override;

public:
    GloveDevice();

    virtual ~GloveDevice();

};

