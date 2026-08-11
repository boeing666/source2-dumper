#pragma once

class CDOTA_Ability_Magnataur_Shockwave : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x85C, size 0x4, align 255
    char _pad_0860[0x14]; // offset 0x860
    int32 m_nReturnDamagePct; // offset 0x874, size 0x4, align 4
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x878, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitListReturning; // offset 0x890, size 0x18, align 8
};
