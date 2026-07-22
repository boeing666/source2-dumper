#pragma once

class CDOTA_Ability_Rubick_SpellSteal : public CDOTABaseAbility /*0x0*/  // sizeof 0x698, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    char[256] m_ActivityModifier; // offset 0x580, size 0x100, align 1
    float32 m_fStolenCastPoint; // offset 0x680, size 0x4, align 4
    CHandle< CBaseEntity > m_hStealTarget; // offset 0x684, size 0x4, align 4
    CHandle< CDOTABaseAbility > m_hStealAbility; // offset 0x688, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x68C, size 0x4, align 255
    int32 m_hProjectile; // offset 0x690, size 0x4, align 4
    char _pad_0694[0x4]; // offset 0x694
};
