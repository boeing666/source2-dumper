#pragma once

class CMatch3HeroDefinition  // sizeof 0x1E0, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    HeroID_t m_nHeroID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0xC]; // offset 0x4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sPieceModel; // offset 0x10, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_sAttackParticleEffect; // offset 0xF0, size 0xE0, align 8
    CUtlString m_sSuperAbility; // offset 0x1D0, size 0x8, align 8
    CUtlString m_sUltraAbility; // offset 0x1D8, size 0x8, align 8
};
