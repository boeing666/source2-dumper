#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMoveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flMultiSwapDistFromOrigin; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0794[0x4]; // offset 0x794
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x878, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x958, size 0xE0, align 8
};
