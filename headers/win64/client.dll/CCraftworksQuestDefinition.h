#pragma once

class CCraftworksQuestDefinition  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CraftworksQuestID_t m_unQuestID; // offset 0x0, size 0x2, align 255
    char _pad_0002[0x2]; // offset 0x2
    CraftworksQuestType_t m_type; // offset 0x4, size 0x4, align 4
    CUtlString m_strLocName; // offset 0x8, size 0x8, align 8
    CUtlString m_strLocProgress; // offset 0x10, size 0x8, align 8
    float32 m_flTurboMultiplier; // offset 0x18, size 0x4, align 4
    char _pad_001C[0x4]; // offset 0x1C
    CUtlVector< CCraftworksQuestComponentReward > m_vecRewards; // offset 0x20, size 0x18, align 8
    CUtlString m_strTrackedStatName; // offset 0x38, size 0x8, align 8
    uint32 m_unStatMaximum; // offset 0x40, size 0x4, align 4
    bool m_bShowInGameProgressToasts; // offset 0x44, size 0x1, align 1
    char _pad_0045[0xB]; // offset 0x45
};
