#pragma once

struct ItemSlotInfo_t  // sizeof 0x30, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    int32[6] m_arMaxPurchasesForTier; // offset 0x0, size 0x18, align 4
    float32[6] m_arPriceAdjustPercentForTier; // offset 0x18, size 0x18, align 4
};
