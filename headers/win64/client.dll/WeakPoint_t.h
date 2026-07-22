#pragma once

struct WeakPoint_t  // sizeof 0x58, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x3C]; // offset 0x0
    bool m_bRegistered; // offset 0x3C, size 0x1, align 1 | MNotSaved
    char _pad_003D[0x3]; // offset 0x3D
    CHandle< C_BaseEntity > m_hOuter; // offset 0x40, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    HitGroup_t m_nCritHitGroup; // offset 0x44, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    int32 m_nBodyGroup; // offset 0x48, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback MNotSaved
    bool m_bPermanentlyBroken; // offset 0x4C, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char _pad_004D[0x3]; // offset 0x4D
    int32 m_nBrokenBodygroupIndex; // offset 0x50, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0054[0x4]; // offset 0x54
};
