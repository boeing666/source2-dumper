#pragma once

class CCitadel_Modifier_EldritchShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x988, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x890]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x890, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flExplodeParticleSize; // offset 0x970, size 0x4, align 4
    char _pad_0974[0x4]; // offset 0x974
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x978, size 0x10, align 8 | MPropertyStartGroup
};
