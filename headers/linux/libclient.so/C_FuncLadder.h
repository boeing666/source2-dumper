#pragma once

class C_FuncLadder : public C_BaseModelEntity /*0x0*/  // sizeof 0x1078, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    Vector m_vecLadderDir; // offset 0x1020, size 0xC, align 4
    char _pad_102C[0x4]; // offset 0x102C
    CUtlVector< CHandle< C_InfoLadderDismount > > m_Dismounts; // offset 0x1030, size 0x18, align 8 | MNotSaved
    Vector m_vecLocalTop; // offset 0x1048, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionTop; // offset 0x1054, size 0xC, align 4
    VectorWS m_vecPlayerMountPositionBottom; // offset 0x1060, size 0xC, align 4
    float32 m_flAutoRideSpeed; // offset 0x106C, size 0x4, align 4
    bool m_bDisabled; // offset 0x1070, size 0x1, align 1
    bool m_bFakeLadder; // offset 0x1071, size 0x1, align 1
    bool m_bHasSlack; // offset 0x1072, size 0x1, align 1
    char _pad_1073[0x5]; // offset 0x1073
};
