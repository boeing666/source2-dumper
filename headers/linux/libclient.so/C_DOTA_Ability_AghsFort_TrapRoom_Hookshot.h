#pragma once

class C_DOTA_Ability_AghsFort_TrapRoom_Hookshot : public C_DOTABaseAbility /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x828, size 0x4, align 255
    Vector m_vProjectileVelocity; // offset 0x82C, size 0xC, align 4
    bool m_bRetract; // offset 0x838, size 0x1, align 1
    char _pad_0839[0x17]; // offset 0x839
};
