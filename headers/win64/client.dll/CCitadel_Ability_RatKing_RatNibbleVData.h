#pragma once

class CCitadel_Ability_RatKing_RatNibbleVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1500, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_EnemyModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_MarkModifier; // offset 0x13F8, size 0x10, align 8
    float32 m_flVerticalBoost; // offset 0x1408, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRatSpread; // offset 0x140C, size 0x4, align 4
    float32 m_RatJumpConeLength; // offset 0x1410, size 0x4, align 4
    float32 m_RatJumpConeAngle; // offset 0x1414, size 0x4, align 4
    float32 m_flRatJumpDelay; // offset 0x1418, size 0x4, align 4 | MPropertyDescription
    float32 m_RatRayRightOffset; // offset 0x141C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1420, size 0xE0, align 8 | MPropertyStartGroup
};
