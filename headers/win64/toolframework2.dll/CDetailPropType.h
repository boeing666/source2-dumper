#pragma once

class CDetailPropType  // sizeof 0x20, align 0x8 (toolutils2) {MGetKV3ClassDefaults MVDataRoot MPropertyFriendlyName MVDataAssociatedFile MVDataOutlinerDefaultExpanded}
{
public:
    float32 m_flDensity; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CDetailPropModel > m_Models; // offset 0x8, size 0x18, align 8 | MVDataPromoteField
};
