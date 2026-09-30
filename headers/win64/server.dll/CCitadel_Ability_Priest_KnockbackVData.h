#pragma once

class CCitadel_Ability_Priest_KnockbackVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13C0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackToWallModifier; // offset 0x13D0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackModifier; // offset 0x13E0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x13F0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x14D0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x15B0, size 0xE0, align 8
    CSoundEventName m_strShootSound; // offset 0x1690, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDoWallSlamBehavior; // offset 0x16A0, size 0x1, align 1 | MPropertyStartGroup
    char _pad_16A1[0x3]; // offset 0x16A1
    float32 m_flMinTravelTime; // offset 0x16A4, size 0x4, align 4
    float32 m_flTravelTimeFudge; // offset 0x16A8, size 0x4, align 4
    int32 m_iFakeBulletCount; // offset 0x16AC, size 0x4, align 4
    float32 m_flFakeBulletSpread; // offset 0x16B0, size 0x4, align 4
    float32 m_flFakeBulletDistanceFudge; // offset 0x16B4, size 0x4, align 4
    float32 m_flDotProductToStun; // offset 0x16B8, size 0x4, align 4
    char _pad_16BC[0x4]; // offset 0x16BC
};
