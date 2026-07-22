#pragma once

class CSurvivorsUpgradeDefinition  // sizeof 0x40, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    ESurvivorsUpgradeRarity m_unRarity; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CSurvivorsAttributeValue > m_vecUpgradeAttributes; // offset 0x8, size 0x18, align 8
    CUtlVector< CSurvivorsAttributeValue > m_vecGlobalUpgradeAttributes; // offset 0x20, size 0x18, align 8
    char _pad_0038[0x8]; // offset 0x38
};
