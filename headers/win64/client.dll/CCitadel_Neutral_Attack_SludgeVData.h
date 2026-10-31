#pragma once

class CCitadel_Neutral_Attack_SludgeVData : public CCitadel_Neutral_Attack_BulletToPointModifierVData /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1408]; // offset 0x0
    float32 m_flDamage; // offset 0x1408, size 0x4, align 4
    char _pad_140C[0x4]; // offset 0x140C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1410, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifierAura > m_OnHitModifier; // offset 0x14F0, size 0x10, align 8 | MPropertyStartGroup
};
