#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x14F0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x14C0, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x14C4, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x14C5, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x14C6, size 0x1, align 1 | MNotSaved
    char _pad_14C7[0x1]; // offset 0x14C7
    VectorWS m_closedPosition; // offset 0x14C8, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x14D4, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x14E0, size 0x4, align 4 | MNotSaved
    VectorWS m_vWhereToSetLightingOrigin; // offset 0x14E4, size 0xC, align 4 | MNotSaved
};
