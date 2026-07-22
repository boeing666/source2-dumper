#pragma once

class CTeamRelativeParticleSystem : public CParticleSystem /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (server) {MNetworkExcludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    CUtlSymbolLarge m_iszFriendlyEffectName; // offset 0xCF8, size 0x8, align 8
    CUtlSymbolLarge m_iszEnemyEffectName; // offset 0xD00, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // offset 0xD08, size 0x8, align 8 | MNetworkEnable MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // offset 0xD10, size 0x8, align 8 | MNetworkEnable MNotSaved
};
