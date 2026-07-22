#pragma once

class C_DOTA_Ability_Dawnbreaker_Solar_Guardian : public C_DOTABaseAbility /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x824, size 0x4, align 4
    bool m_bJumping; // offset 0x828, size 0x1, align 1
    char _pad_0829[0x3]; // offset 0x829
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x82C, size 0x4, align 4
    ParticleIndex_t m_nTPFXIndex; // offset 0x830, size 0x4, align 255
    ParticleIndex_t m_nAoEFXIndex; // offset 0x834, size 0x4, align 255
};
