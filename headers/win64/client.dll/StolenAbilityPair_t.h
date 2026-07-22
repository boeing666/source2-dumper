#pragma once

struct StolenAbilityPair_t  // sizeof 0x38, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    EAbilitySlots_t m_ItemSlotType; // offset 0x30, size 0x2, align 2 | MNetworkEnable
    char _pad_0032[0x2]; // offset 0x32
    CUtlStringToken m_StolenAbilityID; // offset 0x34, size 0x4, align 4 | MNetworkEnable
};
