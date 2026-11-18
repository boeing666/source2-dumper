#pragma once

class CDOTA_Ability_Magnataur_Shockwave : public C_DOTABaseAbility /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x828]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x828, size 0x4, align 255
    int32 m_nReturnDamagePct; // offset 0x82C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x830, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitListReturning; // offset 0x848, size 0x18, align 8
};
