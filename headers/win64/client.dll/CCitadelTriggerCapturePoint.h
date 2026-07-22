#pragma once

class CCitadelTriggerCapturePoint : public C_BaseTrigger /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    CCitadelInWorldEventTimer* m_pUIWorldEventTimer; // offset 0xA78, size 0x8, align 8
    GameTime_t m_tQueuedEnableTime; // offset 0xA80, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    float32 m_flCaptureProgress; // offset 0xA84, size 0x4, align 4 | MNetworkEnable
    int32 m_nCaptureProgressOwner; // offset 0xA88, size 0x4, align 4 | MNetworkEnable
    int32 m_nActivelyCapturingTeam; // offset 0xA8C, size 0x4, align 4 | MNetworkEnable
    int32 m_nActiveCapturers; // offset 0xA90, size 0x4, align 4 | MNetworkEnable
    uint8 m_nEnableState; // offset 0xA94, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0A95[0x3]; // offset 0xA95
};
