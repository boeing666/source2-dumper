#pragma once

class CCitadel_Ability_Artist_HomingProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x11E8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackModifier; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1170, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x1180, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StackingBuffModifier; // offset 0x1190, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0x11A0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strInkShootSound; // offset 0x11B0, size 0x10, align 8
    CGlobalSymbol m_strAG2ProjectileFlightHeroState; // offset 0x11C0, size 0x8, align 8 | MPropertyStartGroup
    bool m_bDebug; // offset 0x11C8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bGrantAmmoOnCast; // offset 0x11C9, size 0x1, align 1
    bool m_bDealDamageOnStrokeDestroy; // offset 0x11CA, size 0x1, align 1
    char _pad_11CB[0x1]; // offset 0x11CB
    float32 m_flHomingRange; // offset 0x11CC, size 0x4, align 4
    float32 m_flHomingStrength; // offset 0x11D0, size 0x4, align 4
    float32 m_flRandomUpVelocity; // offset 0x11D4, size 0x4, align 4
    float32 m_flRandomLeftVelocity; // offset 0x11D8, size 0x4, align 4
    float32 m_flSpringStrength; // offset 0x11DC, size 0x4, align 4
    float32 m_flDampingStrength; // offset 0x11E0, size 0x4, align 4
    char _pad_11E4[0x4]; // offset 0x11E4
};
