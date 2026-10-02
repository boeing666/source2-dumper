#pragma once

class CCitadel_Ability_Priest_KnockbackVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1708, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackToWallModifier; // offset 0x1418, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_KnockbackModifier; // offset 0x1428, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ShootParticle; // offset 0x1438, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_InitialImpactParticle; // offset 0x1518, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_WallImpactParticle; // offset 0x15F8, size 0xE0, align 8
    CSoundEventName m_strShootSound; // offset 0x16D8, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDoWallSlamBehavior; // offset 0x16E8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_16E9[0x3]; // offset 0x16E9
    float32 m_flMinTravelTime; // offset 0x16EC, size 0x4, align 4
    float32 m_flTravelTimeFudge; // offset 0x16F0, size 0x4, align 4
    int32 m_iFakeBulletCount; // offset 0x16F4, size 0x4, align 4
    float32 m_flFakeBulletSpread; // offset 0x16F8, size 0x4, align 4
    float32 m_flFakeBulletDistanceFudge; // offset 0x16FC, size 0x4, align 4
    float32 m_flDotProductToStun; // offset 0x1700, size 0x4, align 4
    char _pad_1704[0x4]; // offset 0x1704
};
