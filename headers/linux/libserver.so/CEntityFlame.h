#pragma once

class CEntityFlame : public CBaseEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CHandle< CBaseEntity > m_hEntAttached; // offset 0x788, size 0x4, align 4
    bool m_bCheapEffect; // offset 0x78C, size 0x1, align 1
    char _pad_078D[0x3]; // offset 0x78D
    float32 m_flSize; // offset 0x790, size 0x4, align 4
    bool m_bUseHitboxes; // offset 0x794, size 0x1, align 1 | MNotSaved
    char _pad_0795[0x3]; // offset 0x795
    int32 m_iNumHitboxFires; // offset 0x798, size 0x4, align 4 | MNotSaved
    float32 m_flHitboxFireScale; // offset 0x79C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLifetime; // offset 0x7A0, size 0x4, align 255
    CHandle< CBaseEntity > m_hAttacker; // offset 0x7A4, size 0x4, align 4 | MNotSaved
    float32 m_flDirectDamagePerSecond; // offset 0x7A8, size 0x4, align 4 | MNotSaved
    int32 m_iCustomDamageType; // offset 0x7AC, size 0x4, align 4 | MNotSaved
    char _pad_07B0[0x18]; // offset 0x7B0
};
