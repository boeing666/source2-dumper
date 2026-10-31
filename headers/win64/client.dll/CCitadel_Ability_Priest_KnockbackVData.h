#pragma once

class CCitadel_Ability_Priest_KnockbackVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackToWallModifier; // offset 0x10B0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackModifier; // offset 0x10C0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x10D0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x11B0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1290, size 0xE0, align 8
    CSoundEventName m_strShootSound; // offset 0x1370, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDoWallSlamBehavior; // offset 0x1380, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1381[0x3]; // offset 0x1381
    float32 m_flMinTravelTime; // offset 0x1384, size 0x4, align 4
    float32 m_flTravelTimeFudge; // offset 0x1388, size 0x4, align 4
    int32 m_iFakeBulletCount; // offset 0x138C, size 0x4, align 4
    float32 m_flFakeBulletSpread; // offset 0x1390, size 0x4, align 4
    float32 m_flFakeBulletDistanceFudge; // offset 0x1394, size 0x4, align 4
    float32 m_flDotProductToStun; // offset 0x1398, size 0x4, align 4
    char _pad_139C[0x4]; // offset 0x139C
};
