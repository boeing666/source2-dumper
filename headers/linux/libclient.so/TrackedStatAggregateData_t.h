#pragma once

struct TrackedStatAggregateData_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_strIndividualStat; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    ETrackedStatAggregate m_eAggregate; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    char _pad_000C[0x4]; // offset 0xC
};
