#pragma once

class CCitadel_Neutral_Attack_LobBookVData : public CCitadel_Neutral_Attack_BulletToPointModifierVData /*0x0*/  // sizeof 0x14B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13C0]; // offset 0x0
    float32 m_flDamage; // offset 0x13C0, size 0x4, align 4
    char _pad_13C4[0x4]; // offset 0x13C4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13C8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_AutoShotCounterModifier; // offset 0x14A8, size 0x10, align 8 | MPropertyStartGroup
};
