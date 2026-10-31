#pragma once

class CCitadel_Ability_RatKing_RatNibbleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1198, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MarkModifier; // offset 0x1090, size 0x10, align 8
    float32 m_flVerticalBoost; // offset 0x10A0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRatSpread; // offset 0x10A4, size 0x4, align 4
    float32 m_RatJumpConeLength; // offset 0x10A8, size 0x4, align 4
    float32 m_RatJumpConeAngle; // offset 0x10AC, size 0x4, align 4
    float32 m_flRatJumpDelay; // offset 0x10B0, size 0x4, align 4 | MPropertyDescription
    float32 m_RatRayRightOffset; // offset 0x10B4, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x10B8, size 0xE0, align 8 | MPropertyStartGroup
};
