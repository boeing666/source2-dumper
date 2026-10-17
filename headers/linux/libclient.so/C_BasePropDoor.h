#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x1020, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFF4]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0xFF4, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0xFF8, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0xFF9, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0xFFA, size 0x1, align 1 | MNotSaved
    char _pad_0FFB[0x1]; // offset 0xFFB
    VectorWS m_closedPosition; // offset 0xFFC, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x1008, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x1014, size 0x4, align 4 | MNotSaved
    char _pad_1018[0x8]; // offset 0x1018
};
