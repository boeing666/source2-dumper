#pragma once

class CCitadel_Ability_Priest_KnockbackVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1390, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackToWallModifier; // offset 0x10A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackModifier; // offset 0x10B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x10C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x11A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x1280, size 0xE0, align 8
    CSoundEventName m_strShootSound; // offset 0x1360, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDoWallSlamBehavior; // offset 0x1370, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1371[0x3]; // offset 0x1371
    float32 m_flMinTravelTime; // offset 0x1374, size 0x4, align 4
    float32 m_flTravelTimeFudge; // offset 0x1378, size 0x4, align 4
    int32 m_iFakeBulletCount; // offset 0x137C, size 0x4, align 4
    float32 m_flFakeBulletSpread; // offset 0x1380, size 0x4, align 4
    float32 m_flFakeBulletDistanceFudge; // offset 0x1384, size 0x4, align 4
    float32 m_flDotProductToStun; // offset 0x1388, size 0x4, align 4
    char _pad_138C[0x4]; // offset 0x138C
};
