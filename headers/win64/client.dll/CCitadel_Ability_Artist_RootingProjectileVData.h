#pragma once

class CCitadel_Ability_Artist_RootingProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1198, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HitModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SilenceModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_RootModifier; // offset 0x10A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x10B0, size 0xE0, align 8 | MPropertyStartGroup
    bool m_bShouldApplyHitModifier; // offset 0x1190, size 0x1, align 1 | MPropertyStartGroup
    bool m_bShouldRootOnHit; // offset 0x1191, size 0x1, align 1
    char _pad_1192[0x6]; // offset 0x1192
};
