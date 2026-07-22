#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0xD50, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xD20]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0xD20, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0xD24, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0xD25, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0xD26, size 0x1, align 1 | MNotSaved
    char _pad_0D27[0x1]; // offset 0xD27
    VectorWS m_closedPosition; // offset 0xD28, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0xD34, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0xD40, size 0x4, align 4 | MNotSaved
    VectorWS m_vWhereToSetLightingOrigin; // offset 0xD44, size 0xC, align 4 | MNotSaved
};
