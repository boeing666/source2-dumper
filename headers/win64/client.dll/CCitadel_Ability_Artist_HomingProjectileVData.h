#pragma once

class CCitadel_Ability_Artist_HomingProjectileVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1550, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_StackModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x14E8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StackingBuffModifier; // offset 0x14F8, size 0x10, align 8
    CSoundEventName m_ExplodeSound; // offset 0x1508, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strInkShootSound; // offset 0x1518, size 0x10, align 8
    CGlobalSymbol m_strAG2ProjectileFlightHeroState; // offset 0x1528, size 0x8, align 8 | MPropertyStartGroup
    bool m_bDebug; // offset 0x1530, size 0x1, align 1 | MPropertyStartGroup
    bool m_bGrantAmmoOnCast; // offset 0x1531, size 0x1, align 1
    bool m_bDealDamageOnStrokeDestroy; // offset 0x1532, size 0x1, align 1
    char _pad_1533[0x1]; // offset 0x1533
    float32 m_flHomingRange; // offset 0x1534, size 0x4, align 4
    float32 m_flHomingStrength; // offset 0x1538, size 0x4, align 4
    float32 m_flRandomUpVelocity; // offset 0x153C, size 0x4, align 4
    float32 m_flRandomLeftVelocity; // offset 0x1540, size 0x4, align 4
    float32 m_flSpringStrength; // offset 0x1544, size 0x4, align 4
    float32 m_flDampingStrength; // offset 0x1548, size 0x4, align 4
    char _pad_154C[0x4]; // offset 0x154C
};
