#pragma once

class CCSPlayerBase_CameraServices : public CPlayer_CameraServices /*0x0*/  // sizeof 0x1B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x178]; // offset 0x0
    uint32 m_iFOV; // offset 0x178, size 0x4, align 4
    uint32 m_iFOVStart; // offset 0x17C, size 0x4, align 4
    GameTime_t m_flFOVTime; // offset 0x180, size 0x4, align 255
    float32 m_flFOVRate; // offset 0x184, size 0x4, align 4
    CHandle< CBaseEntity > m_hZoomOwner; // offset 0x188, size 0x4, align 4
    char _pad_018C[0x4]; // offset 0x18C
    CUtlVector< CHandle< CBaseEntity > > m_hTriggerFogList; // offset 0x190, size 0x18, align 8
    CHandle< CBaseEntity > m_hLastFogTrigger; // offset 0x1A8, size 0x4, align 4
    char _pad_01AC[0x4]; // offset 0x1AC
};
