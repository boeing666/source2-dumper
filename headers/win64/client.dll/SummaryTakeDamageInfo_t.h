#pragma once

struct SummaryTakeDamageInfo_t  // sizeof 0x170, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 nSummarisedCount; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CTakeDamageInfo info; // offset 0x8, size 0xF8, align 8
    CTakeDamageResult result; // offset 0x100, size 0x68, align 8
    CHandle< C_BaseEntity > hTarget; // offset 0x168, size 0x4, align 4
    char _pad_016C[0x4]; // offset 0x16C
};
