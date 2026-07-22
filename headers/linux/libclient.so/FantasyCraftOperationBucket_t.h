#pragma once

struct FantasyCraftOperationBucket_t  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    uint16 m_unOperationCount; // offset 0x0, size 0x2, align 2 | MPropertyDescription
    char _pad_0002[0x6]; // offset 0x2
    CUtlVector< FantasyCraftOperation_t > m_vecOperations; // offset 0x8, size 0x18, align 8
    char _pad_0020[0x8]; // offset 0x20
};
