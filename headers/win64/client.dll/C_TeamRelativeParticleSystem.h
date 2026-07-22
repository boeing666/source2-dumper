#pragma once

class C_TeamRelativeParticleSystem : public C_ParticleSystem /*0x0*/  // sizeof 0xF90, align 0x8 [vtable] (client) {MNetworkExcludeByName MNetworkIncludeByName MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlSymbolLarge m_iszFriendlyEffectName; // offset 0xF70, size 0x8, align 8
    CUtlSymbolLarge m_iszEnemyEffectName; // offset 0xF78, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // offset 0xF80, size 0x8, align 8 | MNetworkEnable MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // offset 0xF88, size 0x8, align 8 | MNetworkEnable MNotSaved
};
