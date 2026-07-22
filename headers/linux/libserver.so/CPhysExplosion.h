#pragma once

class CPhysExplosion : public CPointEntity /*0x0*/  // sizeof 0x7C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bExplodeOnSpawn; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_flMagnitude; // offset 0x78C, size 0x4, align 4
    float32 m_flDamage; // offset 0x790, size 0x4, align 4
    float32 m_radius; // offset 0x794, size 0x4, align 4
    CUtlSymbolLarge m_targetEntityName; // offset 0x798, size 0x8, align 8
    float32 m_flInnerRadius; // offset 0x7A0, size 0x4, align 4
    float32 m_flPushScale; // offset 0x7A4, size 0x4, align 4
    bool m_bConvertToDebrisWhenPossible; // offset 0x7A8, size 0x1, align 1
    bool m_bAffectInvulnerableEnts; // offset 0x7A9, size 0x1, align 1
    bool m_bDisablePushClamp; // offset 0x7AA, size 0x1, align 1
    char _pad_07AB[0x5]; // offset 0x7AB
    CEntityIOOutput m_OnPushedPlayer; // offset 0x7B0, size 0x18, align 255
};
