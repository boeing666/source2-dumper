#pragma once

class CMonsterHunterEconItemDefinition  // sizeof 0x48, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    MonsterHunterEconItemID_t m_unEconItemID; // offset 0x0, size 0x1, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_strEconItemNavigationName; // offset 0x8, size 0x8, align 8
    CUtlString m_strCustomClass; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    item_definition_index_t m_unPreviewItemIndex; // offset 0x18, size 0x4, align 255 | MPropertyDescription
    int32 m_nPreviewPremiumCosmeticGroupIndex; // offset 0x1C, size 0x4, align 4
    CUtlVector< CMonsterHunterCosmeticSkinGroup > m_vecCosmeticSkinGroups; // offset 0x20, size 0x18, align 8
    float32 m_flPreviewModelRotation; // offset 0x38, size 0x4, align 4
    float32 m_flPreviewModelZoom; // offset 0x3C, size 0x4, align 4
    bool m_bHasDetailedView; // offset 0x40, size 0x1, align 1
    bool m_bCosmeticGroupsNeedToBeCraftedInOrder; // offset 0x41, size 0x1, align 1
    char _pad_0042[0x6]; // offset 0x42
};
