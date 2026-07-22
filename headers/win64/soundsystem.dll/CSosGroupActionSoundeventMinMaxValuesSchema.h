#pragma once

class CSosGroupActionSoundeventMinMaxValuesSchema : public CSosGroupActionSchema /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (soundsystem) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_strQueryPublicFieldName; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strDelayPublicFieldName; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName
    bool m_bExcludeStoppedSounds; // offset 0x18, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bExcludeDelayedSounds; // offset 0x19, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bExcludeSoundsBelowThreshold; // offset 0x1A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_001B[0x1]; // offset 0x1B
    float32 m_flExcludeSoundsMinThresholdValue; // offset 0x1C, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bExcludSoundsAboveThreshold; // offset 0x20, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0021[0x3]; // offset 0x21
    float32 m_flExcludeSoundsMaxThresholdValue; // offset 0x24, size 0x4, align 4 | MPropertyFriendlyName
    CUtlString m_strMinValueName; // offset 0x28, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strMaxValueName; // offset 0x30, size 0x8, align 8 | MPropertyFriendlyName
    char _pad_0038[0x8]; // offset 0x38
};
