#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0xF10, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xEE0]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0xEE0, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0xEE4, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0xEE5, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0xEE6, size 0x1, align 1 | MNotSaved
    char _pad_0EE7[0x1]; // offset 0xEE7
    VectorWS m_closedPosition; // offset 0xEE8, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0xEF4, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0xF00, size 0x4, align 4 | MNotSaved
    char _pad_0F04[0xC]; // offset 0xF04
};
