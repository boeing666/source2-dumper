#pragma once

class CTimeline : public IntervalTimer /*0x0*/  // sizeof 0x228, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    float32[64] m_flValues; // offset 0x10, size 0x100, align 4 | MNetworkEnable
    int32[64] m_nValueCounts; // offset 0x110, size 0x100, align 4 | MNetworkEnable
    int32 m_nBucketCount; // offset 0x210, size 0x4, align 4 | MNetworkEnable
    float32 m_flInterval; // offset 0x214, size 0x4, align 4 | MNetworkEnable
    float32 m_flFinalValue; // offset 0x218, size 0x4, align 4 | MNetworkEnable
    TimelineCompression_t m_nCompressionType; // offset 0x21C, size 0x4, align 4 | MNetworkEnable
    bool m_bStopped; // offset 0x220, size 0x1, align 1 | MNetworkEnable
    char _pad_0221[0x7]; // offset 0x221
};
