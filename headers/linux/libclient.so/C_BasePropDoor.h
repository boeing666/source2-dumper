#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x1090, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1064]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x1064, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x1068, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x1069, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x106A, size 0x1, align 1 | MNotSaved
    char _pad_106B[0x1]; // offset 0x106B
    VectorWS m_closedPosition; // offset 0x106C, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x1078, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x1084, size 0x4, align 4 | MNotSaved
    char _pad_1088[0x8]; // offset 0x1088
};
