#pragma once

class CCitadel_Ability_Unicorn_RadiantBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1838, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1918, size 0xE0, align 8
    float32 m_flJumpAirSpeedMax; // offset 0x19F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpFallSpeedMax; // offset 0x19FC, size 0x4, align 4
    float32 m_flJumpAirDrag; // offset 0x1A00, size 0x4, align 4
    int32 m_iConeBulletCount; // offset 0x1A04, size 0x4, align 4
    float32 m_flConeBulletSpread; // offset 0x1A08, size 0x4, align 4
    float32 m_flRangeScaleIncreaseMax; // offset 0x1A0C, size 0x4, align 4
    float32 m_flRangeScaleIncreaseMaxSpeed; // offset 0x1A10, size 0x4, align 4
    float32 m_flHitConeAngleExtra; // offset 0x1A14, size 0x4, align 4
};
