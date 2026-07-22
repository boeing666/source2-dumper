#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x1400, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x13D0]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x13D0, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x13D4, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x13D5, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x13D6, size 0x1, align 1 | MNotSaved
    char _pad_13D7[0x1]; // offset 0x13D7
    VectorWS m_closedPosition; // offset 0x13D8, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x13E4, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x13F0, size 0x4, align 4 | MNotSaved
    VectorWS m_vWhereToSetLightingOrigin; // offset 0x13F4, size 0xC, align 4 | MNotSaved
};
