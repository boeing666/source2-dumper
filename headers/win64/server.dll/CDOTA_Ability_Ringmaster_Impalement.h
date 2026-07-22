#pragma once

class CDOTA_Ability_Ringmaster_Impalement : public CDOTABaseAbility /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    VectorWS m_vStartPos; // offset 0x580, size 0xC, align 4
    int32 dagger_width; // offset 0x58C, size 0x4, align 4
    CUtlVector< int32 > m_ImpactedProjectiles; // offset 0x590, size 0x18, align 8
    CUtlVector< std::pair< int32, CHandle< CBaseEntity > > > m_vecBoxedUnitHits; // offset 0x5A8, size 0x18, align 8
};
