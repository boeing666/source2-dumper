#pragma once

class CTakeDamageSummaryScopeGuard  // sizeof 0x20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< SummaryTakeDamageInfo_t* > m_vecSummaries; // offset 0x8, size 0x18, align 8
};
