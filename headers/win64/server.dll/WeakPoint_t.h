#pragma once

struct WeakPoint_t  // sizeof 0x98, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x7C]; // offset 0x0
    bool m_bRegistered; // offset 0x7C, size 0x1, align 1 | MNotSaved
    char _pad_007D[0x3]; // offset 0x7D
    CHandle< CBaseEntity > m_hOuter; // offset 0x80, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    HitGroup_t m_nCritHitGroup; // offset 0x84, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    int32 m_nBodyGroup; // offset 0x88, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    bool m_bPermanentlyBroken; // offset 0x8C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char _pad_008D[0x3]; // offset 0x8D
    int32 m_nBrokenBodygroupIndex; // offset 0x90, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0094[0x4]; // offset 0x94
};
