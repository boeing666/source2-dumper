#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0xEB0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE80]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0xE80, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0xE84, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0xE85, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0xE86, size 0x1, align 1 | MNotSaved
    char _pad_0E87[0x1]; // offset 0xE87
    VectorWS m_closedPosition; // offset 0xE88, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0xE94, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0xEA0, size 0x4, align 4 | MNotSaved
    char _pad_0EA4[0xC]; // offset 0xEA4
};
