#pragma once

struct SummaryTakeDamageInfo_t  // sizeof 0x140, align 0xFF (client)
{
    int32 nSummarisedCount; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CTakeDamageInfo info; // offset 0x8, size 0x100, align 255
    CTakeDamageResult result; // offset 0x108, size 0x30, align 255
    CHandle< C_BaseEntity > hTarget; // offset 0x138, size 0x4, align 4
    char _pad_013C[0x4]; // offset 0x13C
};
