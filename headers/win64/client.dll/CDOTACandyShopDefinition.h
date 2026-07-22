#pragma once

class CDOTACandyShopDefinition  // sizeof 0xE8, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CandyShopID_t m_unCandyShopID; // offset 0x8, size 0x1, align 255 | MPropertyDescription
    char _pad_0009[0x7]; // offset 0x9
    CUtlString m_sLocName; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    uint32 m_unDefaultInventorySize; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    uint32 m_unMaximumInventorySize; // offset 0x1C, size 0x4, align 4 | MPropertyDescription
    uint32 m_unDefaultRerollCharges; // offset 0x20, size 0x4, align 4 | MPropertyDescription
    uint32 m_unDefaultMaxRerollCharges; // offset 0x24, size 0x4, align 4 | MPropertyDescription
    item_definition_index_t m_unCandyBagItemDef; // offset 0x28, size 0x4, align 255 | MPropertyDescription
    uint8 m_unFixedExchangeRecipeMaxCandies; // offset 0x2C, size 0x1, align 1 | MPropertyDescription
    char _pad_002D[0x3]; // offset 0x2D
    uint32 m_unFixedExchangeRecipeStartDate; // offset 0x30, size 0x4, align 4 | MPropertyDescription
    uint32 m_unFixedExchangeRecipeUpdateRateInSeconds; // offset 0x34, size 0x4, align 4 | MPropertyDescription
    uint8 m_unFixedExchangeRecipeDefaultCount; // offset 0x38, size 0x1, align 1 | MPropertyDescription
    uint8 m_unFixedExchangeRecipeMaximumCount; // offset 0x39, size 0x1, align 1 | MPropertyDescription
    uint8 m_unVariableExchangeInputCandyCount; // offset 0x3A, size 0x1, align 1 | MPropertyDescription
    uint8 m_unVariableExchangeOutputCandyCount; // offset 0x3B, size 0x1, align 1 | MPropertyDescription
    EEvent m_eExpireEvent; // offset 0x3C, size 0x4, align 4 | MPropertyDescription
    uint8 m_unRewardSlotsDefaultCount; // offset 0x40, size 0x1, align 1 | MPropertyDescription
    char _pad_0041[0x7]; // offset 0x41
    CUtlString m_sAttrLootList; // offset 0x48, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sViewPageEvent; // offset 0x50, size 0x8, align 8 | MPropertyDescription
    CUtlVector< CandyShopCandyType_t > m_vecCandyTypes; // offset 0x58, size 0x18, align 8
    CUtlVector< CandyShopRewardSlot_t > m_vecRewardSlots; // offset 0x70, size 0x18, align 8
    CUtlVector< CandyShopRewardOption_t > m_vecDefaultRewardOptions; // offset 0x88, size 0x18, align 8
    char _pad_00A0[0x48]; // offset 0xA0
};
