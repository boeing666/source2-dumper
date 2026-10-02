#pragma once

class CCitadel_Ability_Unicorn_RadiantBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1408, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x14E8, size 0xE0, align 8
    float32 m_flJumpAirSpeedMax; // offset 0x15C8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpFallSpeedMax; // offset 0x15CC, size 0x4, align 4
    float32 m_flJumpAirDrag; // offset 0x15D0, size 0x4, align 4
    int32 m_iConeBulletCount; // offset 0x15D4, size 0x4, align 4
    float32 m_flConeBulletSpread; // offset 0x15D8, size 0x4, align 4
    float32 m_flRangeScaleIncreaseMax; // offset 0x15DC, size 0x4, align 4
    float32 m_flRangeScaleIncreaseMaxSpeed; // offset 0x15E0, size 0x4, align 4
    float32 m_flHitConeAngleExtra; // offset 0x15E4, size 0x4, align 4
};
