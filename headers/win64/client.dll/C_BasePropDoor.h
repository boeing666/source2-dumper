#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x1080, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1050]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x1050, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x1054, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x1055, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x1056, size 0x1, align 1 | MNotSaved
    char _pad_1057[0x1]; // offset 0x1057
    VectorWS m_closedPosition; // offset 0x1058, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x1064, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x1070, size 0x4, align 4 | MNotSaved
    char _pad_1074[0xC]; // offset 0x1074
};
