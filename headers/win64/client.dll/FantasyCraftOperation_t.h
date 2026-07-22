#pragma once

struct FantasyCraftOperation_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyOperationID_t m_unOperationID; // offset 0x0, size 0x2, align 255 | MPropertyDescription
    char _pad_0002[0x2]; // offset 0x2
    int32 m_nRollWeight; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    EFantasyOperationTarget m_eTarget; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
    CUtlString m_sLocDescription; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    CUtlVector< FantasyCraftingGemMutation_t > m_vecOperations; // offset 0x18, size 0x18, align 8 | MPropertyDescription
};
