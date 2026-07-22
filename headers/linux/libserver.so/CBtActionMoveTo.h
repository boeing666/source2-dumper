#pragma once

class CBtActionMoveTo : public CBtNode /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlString m_szDestinationInputKey; // offset 0x60, size 0x8, align 8
    CUtlString m_szHidingSpotInputKey; // offset 0x68, size 0x8, align 8
    CUtlString m_szThreatInputKey; // offset 0x70, size 0x8, align 8
    VectorWS m_vecDestination; // offset 0x78, size 0xC, align 4
    bool m_bAutoLookAdjust; // offset 0x84, size 0x1, align 1
    bool m_bComputePath; // offset 0x85, size 0x1, align 1
    char _pad_0086[0x2]; // offset 0x86
    float32 m_flDamagingAreasPenaltyCost; // offset 0x88, size 0x4, align 4
    char _pad_008C[0x4]; // offset 0x8C
    CountdownTimer m_CheckApproximateCornersTimer; // offset 0x90, size 0x18, align 8
    CountdownTimer m_CheckHighPriorityItem; // offset 0xA8, size 0x18, align 8
    CountdownTimer m_RepathTimer; // offset 0xC0, size 0x18, align 8
    float32 m_flArrivalEpsilon; // offset 0xD8, size 0x4, align 4
    float32 m_flAdditionalArrivalEpsilon2D; // offset 0xDC, size 0x4, align 4
    float32 m_flHidingSpotCheckDistanceThreshold; // offset 0xE0, size 0x4, align 4
    float32 m_flNearestAreaDistanceThreshold; // offset 0xE4, size 0x4, align 4
};
