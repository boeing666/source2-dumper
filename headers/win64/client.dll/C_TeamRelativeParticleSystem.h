#pragma once

class C_TeamRelativeParticleSystem : public C_ParticleSystem /*0x0*/  // sizeof 0x11B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1198]; // offset 0x0
    CUtlSymbolLarge m_iszFriendlyEffectName; // offset 0x1198, size 0x8, align 8
    CUtlSymbolLarge m_iszEnemyEffectName; // offset 0x11A0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iFriendlyEffectIndex; // offset 0x11A8, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEnemyEffectIndex; // offset 0x11B0, size 0x8, align 8 | MNotSaved
};
