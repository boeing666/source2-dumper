#pragma once

class C_FuncLadder : public C_BaseModelEntity /*0x0*/  // sizeof 0xA00, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    Vector m_vecLadderDir; // offset 0x9A8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    char _pad_09B4[0x4]; // offset 0x9B4
    CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // offset 0x9B8, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0x9D0, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0x9DC, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    VectorWS m_vecPlayerMountPositionBottom; // offset 0x9E8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    float32 m_flAutoRideSpeed; // offset 0x9F4, size 0x4, align 4 | MNetworkEnable
    bool m_bDisabled; // offset 0x9F8, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x9F9, size 0x1, align 1 | MNetworkEnable
    bool m_bHasSlack; // offset 0x9FA, size 0x1, align 1
    char _pad_09FB[0x5]; // offset 0x9FB
};
