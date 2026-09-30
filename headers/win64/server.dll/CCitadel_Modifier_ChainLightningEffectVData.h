#pragma once

class CCitadel_Modifier_ChainLightningEffectVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x850, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChainParticle; // offset 0x760, size 0xE0, align 8 | MPropertyGroupName
    CSoundEventName m_strChainSound; // offset 0x840, size 0x10, align 8 | MPropertyGroupName
};
