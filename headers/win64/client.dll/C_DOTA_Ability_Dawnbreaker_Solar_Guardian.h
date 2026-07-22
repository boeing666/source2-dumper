#pragma once

class C_DOTA_Ability_Dawnbreaker_Solar_Guardian : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6C0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x6A8, size 0x4, align 4
    bool m_bJumping; // offset 0x6AC, size 0x1, align 1
    char _pad_06AD[0x3]; // offset 0x6AD
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x6B0, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x6B4, size 0x4, align 255
    ParticleIndex_t m_nAoEFXIndex; // offset 0x6B8, size 0x4, align 255
    char _pad_06BC[0x4]; // offset 0x6BC
};
