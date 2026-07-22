#pragma once

class CCSPlayerBase_CameraServices : public CPlayer_CameraServices /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x290]; // offset 0x0
    uint32 m_iFOV; // offset 0x290, size 0x4, align 4
    uint32 m_iFOVStart; // offset 0x294, size 0x4, align 4
    GameTime_t m_flFOVTime; // offset 0x298, size 0x4, align 255
    float32 m_flFOVRate; // offset 0x29C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hZoomOwner; // offset 0x2A0, size 0x4, align 4
    float32 m_flLastShotFOV; // offset 0x2A4, size 0x4, align 4
};
