#pragma once

class CModifierQuarantineVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x930, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BubbleParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BubbleExplodeParticle; // offset 0x840, size 0xE0, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x920, size 0x10, align 8 | MPropertyStartGroup
};
