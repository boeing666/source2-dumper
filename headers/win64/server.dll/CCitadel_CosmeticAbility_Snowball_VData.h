#pragma once

class CCitadel_CosmeticAbility_Snowball_VData : public CitadelCosmeticAbilityVData /*0x0*/  // sizeof 0x1520, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flMaxLevelDebuffDuration; // offset 0x13E8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13EC[0x4]; // offset 0x13EC
    CLevelProgressionDefinition m_progressionDamage; // offset 0x13F0, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCooldown; // offset 0x1420, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSpeed; // offset 0x1450, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCharges; // offset 0x1480, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSnowballCount; // offset 0x14B0, size 0x30, align 8
    CLevelProgressionDefinition m_progressionRadius; // offset 0x14E0, size 0x30, align 8
    CEmbeddedSubclass< CBaseModifier > m_SnowballModifier; // offset 0x1510, size 0x10, align 8 | MPropertyStartGroup
};
