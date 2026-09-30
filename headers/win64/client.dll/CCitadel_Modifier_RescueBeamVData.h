#pragma once

class CCitadel_Modifier_RescueBeamVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x760, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x840, size 0xE0, align 8
    bool m_bBreakOnRangeLoss; // offset 0x920, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0921[0x7]; // offset 0x921
};
