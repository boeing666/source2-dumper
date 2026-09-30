#pragma once

class CCitadel_CosmeticAbility_Snowball_VData : public CitadelCosmeticAbilityVData /*0x0*/  // sizeof 0x14D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flMaxLevelDebuffDuration; // offset 0x13A0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13A4[0x4]; // offset 0x13A4
    CLevelProgressionDefinition m_progressionDamage; // offset 0x13A8, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCooldown; // offset 0x13D8, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSpeed; // offset 0x1408, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCharges; // offset 0x1438, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSnowballCount; // offset 0x1468, size 0x30, align 8
    CLevelProgressionDefinition m_progressionRadius; // offset 0x1498, size 0x30, align 8
    CEmbeddedSubclass< CBaseModifier > m_SnowballModifier; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
};
