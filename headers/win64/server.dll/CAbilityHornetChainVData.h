#pragma once

class CAbilityHornetChainVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strExplodeSound; // offset 0x1160, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_ChainModifier; // offset 0x1170, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_DisarmModifier; // offset 0x1180, size 0x10, align 8 | MPropertyGroupName
};
