#pragma once

class CAbilityHornetChainVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strExplodeSound; // offset 0x1150, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // offset 0x1160, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1170, size 0x10, align 8 | MPropertyGroupName
};
