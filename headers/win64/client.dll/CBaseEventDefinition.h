#pragma once

class CBaseEventDefinition  // sizeof 0x188, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    EventStartTimestamp_t m_rtEventStartTime; // offset 0x8, size 0x10, align 255
    EventEndTimestamp_t m_rtEventEndTime; // offset 0x18, size 0x10, align 255
    EventEndTimestamp_t m_rtEventExpireTime; // offset 0x28, size 0x10, align 255
    EventStartTimestamp_t m_rtEventStartTimeDev; // offset 0x38, size 0x10, align 255
    EventEndTimestamp_t m_rtEventEndTimeDev; // offset 0x48, size 0x10, align 255
    EventEndTimestamp_t m_rtEventExpireTimeDev; // offset 0x58, size 0x10, align 255
    bool m_bExperimentalUsesDevTiming; // offset 0x68, size 0x1, align 1
    bool m_bMustBeOwned; // offset 0x69, size 0x1, align 1
    char _pad_006A[0x2]; // offset 0x6A
    uint32 m_unDefaultEventPoints; // offset 0x6C, size 0x4, align 4
    uint32 m_unEventPointsPerLevel; // offset 0x70, size 0x4, align 4
    char _pad_0074[0x114]; // offset 0x74
};
