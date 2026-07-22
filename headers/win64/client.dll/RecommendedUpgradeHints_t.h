#pragma once

struct RecommendedUpgradeHints_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    uint32 unSellPriority; // offset 0x0, size 0x4, align 4
    uint32 unRequiredFlexSlots; // offset 0x4, size 0x4, align 4
    CSubclassName< 4 > sImbueTarget; // offset 0x8, size 0x10, align 8
};
