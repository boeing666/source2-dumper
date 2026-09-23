#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x1460, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x142C]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x142C, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x1430, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x1431, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x1432, size 0x1, align 1 | MNotSaved
    char _pad_1433[0x1]; // offset 0x1433
    VectorWS m_closedPosition; // offset 0x1434, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x1440, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x144C, size 0x4, align 4 | MNotSaved
    VectorWS m_vWhereToSetLightingOrigin; // offset 0x1450, size 0xC, align 4 | MNotSaved
    char _pad_145C[0x4]; // offset 0x145C
};
