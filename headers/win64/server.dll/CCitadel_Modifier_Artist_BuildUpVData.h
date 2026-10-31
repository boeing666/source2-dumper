#pragma once

class CCitadel_Modifier_Artist_BuildUpVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x798, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x7A8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImmobilizeBuildupParticle; // offset 0x7B8, size 0xE0, align 8 | MPropertyStartGroup
    bool m_bBuildupOnHit; // offset 0x898, size 0x1, align 1 | MPropertyStartGroup
    bool m_bTriggerOnFull; // offset 0x899, size 0x1, align 1
    bool m_bTriggerOnPartial; // offset 0x89A, size 0x1, align 1
    bool m_bStunOnFull; // offset 0x89B, size 0x1, align 1
    bool m_bPullOnFull; // offset 0x89C, size 0x1, align 1
    char _pad_089D[0x3]; // offset 0x89D
};
