#pragma once

class CFuncLadder : public CBaseModelEntity /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    Vector m_vecLadderDir; // offset 0x780, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    char _pad_078C[0x4]; // offset 0x78C
    CUtlVector< CHandle< CInfoLadderDismount > > m_Dismounts; // offset 0x790, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0x7A8, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0x7B4, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    VectorWS m_vecPlayerMountPositionBottom; // offset 0x7C0, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    float32 m_flAutoRideSpeed; // offset 0x7CC, size 0x4, align 4 | MNetworkEnable
    bool m_bDisabled; // offset 0x7D0, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x7D1, size 0x1, align 1 | MNetworkEnable
    bool m_bHasSlack; // offset 0x7D2, size 0x1, align 1
    char _pad_07D3[0x5]; // offset 0x7D3
    CUtlSymbolLarge m_surfacePropName; // offset 0x7D8, size 0x8, align 8
    CEntityIOOutput m_OnPlayerGotOnLadder; // offset 0x7E0, size 0x18, align 255
    CEntityIOOutput m_OnPlayerGotOffLadder; // offset 0x7F8, size 0x18, align 255
};
