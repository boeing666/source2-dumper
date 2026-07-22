#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0xEC0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xE8C]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0xE8C, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0xE90, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0xE91, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0xE92, size 0x1, align 1 | MNotSaved
    char _pad_0E93[0x1]; // offset 0xE93
    VectorWS m_closedPosition; // offset 0xE94, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0xEA0, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0xEAC, size 0x4, align 4 | MNotSaved
    VectorWS m_vWhereToSetLightingOrigin; // offset 0xEB0, size 0xC, align 4 | MNotSaved
    char _pad_0EBC[0x4]; // offset 0xEBC
};
