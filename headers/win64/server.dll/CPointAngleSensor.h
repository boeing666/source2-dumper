#pragma once

class CPointAngleSensor : public CPointEntity /*0x0*/  // sizeof 0x550, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bDisabled; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x7]; // offset 0x4B1
    CUtlSymbolLarge m_nLookAtName; // offset 0x4B8, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x4C0, size 0x4, align 4
    CHandle< CBaseEntity > m_hLookAtEntity; // offset 0x4C4, size 0x4, align 4
    float32 m_flDuration; // offset 0x4C8, size 0x4, align 4
    float32 m_flDotTolerance; // offset 0x4CC, size 0x4, align 4
    GameTime_t m_flFacingTime; // offset 0x4D0, size 0x4, align 255
    bool m_bFired; // offset 0x4D4, size 0x1, align 1
    char _pad_04D5[0x3]; // offset 0x4D5
    CEntityIOOutput m_OnFacingLookat; // offset 0x4D8, size 0x18, align 255
    CEntityIOOutput m_OnNotFacingLookat; // offset 0x4F0, size 0x18, align 255
    CEntityOutputTemplate< Vector > m_TargetDir; // offset 0x508, size 0x28, align 8
    CEntityOutputTemplate< float32 > m_FacingPercentage; // offset 0x530, size 0x20, align 8
};
