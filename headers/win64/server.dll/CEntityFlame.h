#pragma once

class CEntityFlame : public CBaseEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CBaseEntity > m_hEntAttached; // offset 0x4A8, size 0x4, align 4
    bool m_bCheapEffect; // offset 0x4AC, size 0x1, align 1
    char _pad_04AD[0x3]; // offset 0x4AD
    float32 m_flSize; // offset 0x4B0, size 0x4, align 4
    bool m_bUseHitboxes; // offset 0x4B4, size 0x1, align 1 | MNotSaved
    char _pad_04B5[0x3]; // offset 0x4B5
    int32 m_iNumHitboxFires; // offset 0x4B8, size 0x4, align 4 | MNotSaved
    float32 m_flHitboxFireScale; // offset 0x4BC, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLifetime; // offset 0x4C0, size 0x4, align 255
    CHandle< CBaseEntity > m_hAttacker; // offset 0x4C4, size 0x4, align 4 | MNotSaved
    float32 m_flDirectDamagePerSecond; // offset 0x4C8, size 0x4, align 4 | MNotSaved
    int32 m_iCustomDamageType; // offset 0x4CC, size 0x4, align 4 | MNotSaved
    char _pad_04D0[0x18]; // offset 0x4D0
};
