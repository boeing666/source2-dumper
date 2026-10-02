#pragma once

class CCitadel_Modifier_EldritchShotVData : public CCitadel_Modifier_BaseBulletPreRollProcVData /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8C8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x8C8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flExplodeParticleSize; // offset 0x9A8, size 0x4, align 4
    char _pad_09AC[0x4]; // offset 0x9AC
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x9B0, size 0x10, align 8 | MPropertyStartGroup
};
