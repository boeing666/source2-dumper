#pragma once

class CPeriodicResourceDefinition  // sizeof 0x28, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    PeriodicResourceID_t m_unPeriodicResourceID; // offset 0x0, size 0x4, align 255
    char _pad_0004[0xC]; // offset 0x4
    uint32 m_rtStartTimestamp; // offset 0x10, size 0x4, align 4
    uint32 m_rtEndTimestamp; // offset 0x14, size 0x4, align 4
    uint32 m_unPeriodDuration; // offset 0x18, size 0x4, align 4
    uint32 m_unDefaultMaxValue; // offset 0x1C, size 0x4, align 4
    bool m_bExtendInitialPeriod; // offset 0x20, size 0x1, align 1
    char _pad_0021[0x7]; // offset 0x21
};
