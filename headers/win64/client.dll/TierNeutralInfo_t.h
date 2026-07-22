#pragma once

struct TierNeutralInfo_t  // sizeof 0x50, align 0xFF [vtable] (client)
{
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nTier; // offset 0x30, size 0x4, align 4
    char _pad_0034[0x4]; // offset 0x34
    C_NetworkUtlVectorBase< AbilityID_t > m_nAbilityID; // offset 0x38, size 0x18, align 8
};
