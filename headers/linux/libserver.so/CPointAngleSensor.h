#pragma once

class CPointAngleSensor : public CPointEntity /*0x0*/  // sizeof 0x828, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bDisabled; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x7]; // offset 0x789
    CUtlSymbolLarge m_nLookAtName; // offset 0x790, size 0x8, align 8
    CHandle< CBaseEntity > m_hTargetEntity; // offset 0x798, size 0x4, align 4
    CHandle< CBaseEntity > m_hLookAtEntity; // offset 0x79C, size 0x4, align 4
    float32 m_flDuration; // offset 0x7A0, size 0x4, align 4
    float32 m_flDotTolerance; // offset 0x7A4, size 0x4, align 4
    GameTime_t m_flFacingTime; // offset 0x7A8, size 0x4, align 255
    bool m_bFired; // offset 0x7AC, size 0x1, align 1
    char _pad_07AD[0x3]; // offset 0x7AD
    CEntityIOOutput m_OnFacingLookat; // offset 0x7B0, size 0x18, align 255
    CEntityIOOutput m_OnNotFacingLookat; // offset 0x7C8, size 0x18, align 255
    CEntityOutputTemplate< Vector > m_TargetDir; // offset 0x7E0, size 0x28, align 8
    CEntityOutputTemplate< float32 > m_FacingPercentage; // offset 0x808, size 0x20, align 8
};
