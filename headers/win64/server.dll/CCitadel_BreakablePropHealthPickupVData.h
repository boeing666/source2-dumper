#pragma once

class CCitadel_BreakablePropHealthPickupVData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0xB88, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xA10]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ParticleAOEHeal; // offset 0xA10, size 0xE0, align 8 | MPropertyGroupName MPropertyFriendlyName
    TimeScalingValue_t m_flHealMaxHealthPercent; // offset 0xAF0, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flHealFixed; // offset 0xB00, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flMissingPctHeal; // offset 0xB10, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flRegenMaxHealthPercent; // offset 0xB20, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flRegenFixed; // offset 0xB30, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    TimeScalingValue_t m_flMissingPctRegen; // offset 0xB40, size 0x10, align 4 | MPropertyFriendlyName MPropertyDescription
    bool m_bUseFixedDuration; // offset 0xB50, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0B51[0x3]; // offset 0xB51
    float32 m_flRegenDuration; // offset 0xB54, size 0x4, align 4 | MPropertyDescription
    float32 m_flRegenDurationTroopers; // offset 0xB58, size 0x4, align 4 | MPropertyDescription
    float32 m_flRegenTrooperMulti; // offset 0xB5C, size 0x4, align 4 | MPropertyDescription
    float32 m_flRegenHPS; // offset 0xB60, size 0x4, align 4 | MPropertyDescription
    char _pad_0B64[0x4]; // offset 0xB64
    CEmbeddedSubclass< CCitadelModifier > m_RegenModifier; // offset 0xB68, size 0x10, align 8
    float32 m_flAOERadius; // offset 0xB78, size 0x4, align 4 | MPropertyStartGroup MPropertyFriendlyName MPropertyDescription
    CITADEL_UNIT_TARGET_TYPE m_AOETargetTypes; // offset 0xB7C, size 0x4, align 4 | MPropertyStartGroup MPropertySuppressExpr MPropertyFriendlyName
    CITADEL_UNIT_TARGET_FLAGS m_AOETargetFlags; // offset 0xB80, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    ELOSCheck m_AOELOSCheckType; // offset 0xB84, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
};
