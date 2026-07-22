#pragma once

class CCitadel_Modifier_EldritchShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x978, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x880]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x880, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flExplodeParticleSize; // offset 0x960, size 0x4, align 4
    char _pad_0964[0x4]; // offset 0x964
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x968, size 0x10, align 8 | MPropertyStartGroup
};
