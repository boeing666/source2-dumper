#pragma once

class CPhysExplosion : public CPointEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bExplodeOnSpawn; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    float32 m_flMagnitude; // offset 0x4AC, size 0x4, align 4
    float32 m_flDamage; // offset 0x4B0, size 0x4, align 4
    float32 m_radius; // offset 0x4B4, size 0x4, align 4
    CUtlSymbolLarge m_targetEntityName; // offset 0x4B8, size 0x8, align 8
    float32 m_flInnerRadius; // offset 0x4C0, size 0x4, align 4
    float32 m_flPushScale; // offset 0x4C4, size 0x4, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0x4C8, size 0x1, align 1
    bool m_bAffectInvulnerableEnts; // offset 0x4C9, size 0x1, align 1
    bool m_bDisablePushClamp; // offset 0x4CA, size 0x1, align 1
    char _pad_04CB[0x5]; // offset 0x4CB
    CEntityIOOutput m_OnPushedPlayer; // offset 0x4D0, size 0x18, align 255
};
