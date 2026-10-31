#pragma once

class CCitadel_CosmeticAbility_Snowball_VData : public CitadelCosmeticAbilityVData /*0x0*/  // sizeof 0x11B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flMaxLevelDebuffDuration; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1084[0x4]; // offset 0x1084
    CLevelProgressionDefinition m_progressionDamage; // offset 0x1088, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCooldown; // offset 0x10B8, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSpeed; // offset 0x10E8, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCharges; // offset 0x1118, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSnowballCount; // offset 0x1148, size 0x30, align 8
    CLevelProgressionDefinition m_progressionRadius; // offset 0x1178, size 0x30, align 8
    CEmbeddedSubclass< CBaseModifier > m_SnowballModifier; // offset 0x11A8, size 0x10, align 8 | MPropertyStartGroup
};
