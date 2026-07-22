#pragma once

class CDOTA_Ability_Rattletrap_Hookshot : public CDOTABaseAbility /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x85C, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x860, size 0xC, align 4
    bool m_bRetract; // offset 0x86C, size 0x1, align 1
    char _pad_086D[0x17]; // offset 0x86D
    CHandle< CBaseEntity > m_hSourceCaster; // offset 0x884, size 0x4, align 4
};
