#pragma once

class CCitadel_Modifier_BubbleVData : public CCitadel_Modifier_SilencedVData /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x9F0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_ExplodeSound; // offset 0xAD0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0xAE0, size 0x10, align 8 | MPropertyStartGroup
};
