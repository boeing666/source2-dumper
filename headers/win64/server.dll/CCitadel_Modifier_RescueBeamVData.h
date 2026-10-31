#pragma once

class CCitadel_Modifier_RescueBeamVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x798, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x878, size 0xE0, align 8
    bool m_bBreakOnRangeLoss; // offset 0x958, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0959[0x7]; // offset 0x959
};
