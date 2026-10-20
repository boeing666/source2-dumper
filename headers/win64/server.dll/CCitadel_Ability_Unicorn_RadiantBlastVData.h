#pragma once

class CCitadel_Ability_Unicorn_RadiantBlastVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1270, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1090, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HitParticle; // offset 0x1170, size 0xE0, align 8
    float32 m_flJumpAirSpeedMax; // offset 0x1250, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flJumpFallSpeedMax; // offset 0x1254, size 0x4, align 4
    float32 m_flJumpAirDrag; // offset 0x1258, size 0x4, align 4
    int32 m_iConeBulletCount; // offset 0x125C, size 0x4, align 4
    float32 m_flConeBulletSpread; // offset 0x1260, size 0x4, align 4
    float32 m_flRangeScaleIncreaseMax; // offset 0x1264, size 0x4, align 4
    float32 m_flRangeScaleIncreaseMaxSpeed; // offset 0x1268, size 0x4, align 4
    float32 m_flHitConeAngleExtra; // offset 0x126C, size 0x4, align 4
};
