#pragma once

class C_FuncLadder : public C_BaseModelEntity /*0x0*/  // sizeof 0x10F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    Vector m_vecLadderDir; // offset 0x1098, size 0xC, align 4
    char _pad_10A4[0x4]; // offset 0x10A4
    CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // offset 0x10A8, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0x10C0, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0x10CC, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0x10D8, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0x10E4, size 0x4, align 4
    bool m_bDisabled; // offset 0x10E8, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x10E9, size 0x1, align 1
    bool m_bHasSlack; // offset 0x10EA, size 0x1, align 1
    char _pad_10EB[0x5]; // offset 0x10EB
};
