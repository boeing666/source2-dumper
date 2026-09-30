#pragma once

class CCitadelTriggerCapturePoint : public C_BaseTrigger /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    CCitadelInWorldEventTimer* m_pUIWorldEventTimer; // offset 0xC98, size 0x8, align 8
    GameTime_t m_tQueuedEnableTime; // offset 0xCA0, size 0x4, align 255
    float32 m_flCaptureProgress; // offset 0xCA4, size 0x4, align 4
    int32 m_nCaptureProgressOwner; // offset 0xCA8, size 0x4, align 4
    int32 m_nActivelyCapturingTeam; // offset 0xCAC, size 0x4, align 4
    int32 m_nActiveCapturers; // offset 0xCB0, size 0x4, align 4
    uint8 m_nEnableState; // offset 0xCB4, size 0x1, align 1
    char _pad_0CB5[0x3]; // offset 0xCB5
};
