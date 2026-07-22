#pragma once

class CSurvivorsAttributeDefinition  // sizeof 0x58, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sLocName; // offset 0x0, size 0x8, align 8
    CUtlString m_sLocTooltip; // offset 0x8, size 0x8, align 8
    CUtlString m_sLocDescription; // offset 0x10, size 0x8, align 8
    CUtlString m_sLocMetaUpgradesTooltip; // offset 0x18, size 0x8, align 8
    CPanoramaImageName m_sImage; // offset 0x20, size 0x10, align 8
    bool m_bPrimary; // offset 0x30, size 0x1, align 1
    bool m_bPercentage; // offset 0x31, size 0x1, align 1
    bool m_bShouldUpgradeProgressionText; // offset 0x32, size 0x1, align 1
    char _pad_0033[0x5]; // offset 0x33
    CUtlVector< CSurvivorsAttributeDefinition::MetaProgressionTier_t > m_vecMetaProgressionTiers; // offset 0x38, size 0x18, align 8
    char _pad_0050[0x8]; // offset 0x50
};
