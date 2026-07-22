#pragma once

class C_DOTA_Ability_Rattletrap_Hookshot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x6A8, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x6AC, size 0xC, align 4
    bool m_bRetract; // offset 0x6B8, size 0x1, align 1
    char _pad_06B9[0x17]; // offset 0x6B9
};
