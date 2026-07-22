#pragma once

class CCitadel_Ability_Priest_KnockbackVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1838, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackToWallModifier; // offset 0x1848, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackModifier; // offset 0x1858, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1868, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x1948, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1A28, size 0xE0, align 8
    CSoundEventName m_strShootSound; // offset 0x1B08, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDoWallSlamBehavior; // offset 0x1B18, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1B19[0x3]; // offset 0x1B19
    float32 m_flMinTravelTime; // offset 0x1B1C, size 0x4, align 4
    float32 m_flTravelTimeFudge; // offset 0x1B20, size 0x4, align 4
    int32 m_iFakeBulletCount; // offset 0x1B24, size 0x4, align 4
    float32 m_flFakeBulletSpread; // offset 0x1B28, size 0x4, align 4
    float32 m_flFakeBulletDistanceFudge; // offset 0x1B2C, size 0x4, align 4
    float32 m_flDotProductToStun; // offset 0x1B30, size 0x4, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
