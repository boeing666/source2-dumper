#pragma once

class CTeamRelativeParticleSystem : public CParticleSystem /*0x0*/  // sizeof 0xE20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    CUtlSymbolLarge m_iszFriendlyEffectName; // offset 0xE00, size 0x8, align 8
    CUtlSymbolLarge m_iszEnemyEffectName; // offset 0xE08, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // offset 0xE10, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // offset 0xE18, size 0x8, align 8 | MNotSaved
};
