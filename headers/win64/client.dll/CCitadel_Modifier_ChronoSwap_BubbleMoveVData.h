#pragma once

class CCitadel_Modifier_ChronoSwap_BubbleMoveVData : public CCitadelModifierVData /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flMultiSwapDistFromOrigin; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    char _pad_0764[0x4]; // offset 0x764
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x768, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealParticle; // offset 0x848, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0x928, size 0xE0, align 8
};
