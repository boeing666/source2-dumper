#pragma once

class CDOTA_Ability_Rubick_SpellSteal : public CDOTABaseAbility /*0x0*/  // sizeof 0x970, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85B]; // offset 0x0
    char[256] m_ActivityModifier; // offset 0x85B, size 0x100, align 1
    char _pad_095B[0x1]; // offset 0x95B
    float32 m_fStolenCastPoint; // offset 0x95C, size 0x4, align 4
    CHandle< CBaseEntity > m_hStealTarget; // offset 0x960, size 0x4, align 4
    CHandle< CDOTABaseAbility > m_hStealAbility; // offset 0x964, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x968, size 0x4, align 255
    int32 m_hProjectile; // offset 0x96C, size 0x4, align 4
};
