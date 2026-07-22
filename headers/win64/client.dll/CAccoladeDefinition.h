#pragma once

class CAccoladeDefinition  // sizeof 0x78, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot MVDataAssociatedFile}
{
public:
    AccoladeID_t m_unAccoladeID; // offset 0x0, size 0x4, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0004[0xC]; // offset 0x4
    CUtlString m_sTrackedStatName; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
    CVDataLocalizedToken m_sFlavorName; // offset 0x20, size 0x10, align 8
    CVDataLocalizedToken m_sDescription; // offset 0x30, size 0x10, align 8
    EAccoladeThresholdType m_eThresholdType; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CUtlVector< TrackedStatValue_t > m_vecThresholds; // offset 0x48, size 0x18, align 8
    CUtlVector< ECitadelGameMode > m_vecEnabledGameModes; // offset 0x60, size 0x18, align 8
};
