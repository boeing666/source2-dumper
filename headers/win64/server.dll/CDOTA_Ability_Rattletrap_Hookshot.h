#pragma once

class CDOTA_Ability_Rattletrap_Hookshot : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x580, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x584, size 0xC, align 4
    bool m_bRetract; // offset 0x590, size 0x1, align 1
    char _pad_0591[0x17]; // offset 0x591
    CHandle< CBaseEntity > m_hSourceCaster; // offset 0x5A8, size 0x4, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
};
