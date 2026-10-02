#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x10E0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10B0]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x10B0, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x10B4, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x10B5, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x10B6, size 0x1, align 1 | MNotSaved
    char _pad_10B7[0x1]; // offset 0x10B7
    VectorWS m_closedPosition; // offset 0x10B8, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x10C4, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x10D0, size 0x4, align 4 | MNotSaved
    char _pad_10D4[0xC]; // offset 0x10D4
};
