#pragma once

class CCitadel_CosmeticItem_Snowball_VData : public CitadelItemVData /*0x0*/  // sizeof 0x19F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18B8]; // offset 0x0
    float32 m_flMaxLevelDebuffDuration; // offset 0x18B8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_18BC[0x4]; // offset 0x18BC
    CLevelProgressionDefinition m_progressionDamage; // offset 0x18C0, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCooldown; // offset 0x18F0, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSpeed; // offset 0x1920, size 0x30, align 8
    CLevelProgressionDefinition m_progressionCharges; // offset 0x1950, size 0x30, align 8
    CLevelProgressionDefinition m_progressionSnowballCount; // offset 0x1980, size 0x30, align 8
    CLevelProgressionDefinition m_progressionRadius; // offset 0x19B0, size 0x30, align 8
    CEmbeddedSubclass< CBaseModifier > m_SnowballModifier; // offset 0x19E0, size 0x10, align 8 | MPropertyStartGroup
};
