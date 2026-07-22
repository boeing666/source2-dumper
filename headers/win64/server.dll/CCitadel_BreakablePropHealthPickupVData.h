#pragma once

class CCitadel_BreakablePropHealthPickupVData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xB50, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParticleAOEHeal; // offset 0x9D8, size 0xE0, align 8 | MPropertyGroupName MPropertyFriendlyName
    TimeScalingValue_t m_flHealMaxHealthPercent; // offset 0xAB8, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flHealFixed; // offset 0xAC8, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flMissingPctHeal; // offset 0xAD8, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flRegenMaxHealthPercent; // offset 0xAE8, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flRegenFixed; // offset 0xAF8, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flMissingPctRegen; // offset 0xB08, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    bool m_bUseFixedDuration; // offset 0xB18, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0B19[0x3]; // offset 0xB19
    float32 m_flRegenDuration; // offset 0xB1C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRegenDurationTroopers; // offset 0xB20, size 0x4, align 4 | MPropertyDescription
    float32 m_flRegenTrooperMulti; // offset 0xB24, size 0x4, align 4 | MPropertyDescription
    float32 m_flRegenHPS; // offset 0xB28, size 0x4, align 4 | MPropertyDescription
    char _pad_0B2C[0x4]; // offset 0xB2C
    CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // offset 0xB30, size 0x10, align 8
    float32 m_flAOERadius; // offset 0xB40, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CITADEL_UNIT_TARGET_TYPE m_AOETargetTypes; // offset 0xB44, size 0x4, align 4 | MPropertyStartGroup MPropertySuppressExpr MPropertyFriendlyName
    CITADEL_UNIT_TARGET_FLAGS m_AOETargetFlags; // offset 0xB48, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    ELOSCheck m_AOELOSCheckType; // offset 0xB4C, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
};
