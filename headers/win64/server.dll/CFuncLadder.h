#pragma once

class CFuncLadder : public CBaseModelEntity /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    Vector m_vecLadderDir; // offset 0x850, size 0xC, align 4
    char _pad_085C[0x4]; // offset 0x85C
    CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // offset 0x860, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0x878, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0x884, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0x890, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0x89C, size 0x4, align 4
    bool m_bDisabled; // offset 0x8A0, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x8A1, size 0x1, align 1
    bool m_bHasSlack; // offset 0x8A2, size 0x1, align 1
    char _pad_08A3[0x5]; // offset 0x8A3
    CUtlSymbolLarge m_surfacePropName; // offset 0x8A8, size 0x8, align 8
    CEntityIOOutput m_OnPlayerGotOnLadder; // offset 0x8B0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerGotOffLadder; // offset 0x8C8, size 0x18, align 255
};
