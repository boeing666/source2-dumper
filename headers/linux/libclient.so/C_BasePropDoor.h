#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0x1380, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x134C]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0x134C, size 0x4, align 4 | MNotSaved
    bool m_modelChanged; // offset 0x1350, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0x1351, size 0x1, align 1 | MNotSaved
    bool m_bNoNPCs; // offset 0x1352, size 0x1, align 1 | MNotSaved
    char _pad_1353[0x1]; // offset 0x1353
    VectorWS m_closedPosition; // offset 0x1354, size 0xC, align 4 | MNotSaved
    QAngle m_closedAngles; // offset 0x1360, size 0xC, align 4 | MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0x136C, size 0x4, align 4 | MNotSaved
    VectorWS m_vWhereToSetLightingOrigin; // offset 0x1370, size 0xC, align 4 | MNotSaved
    char _pad_137C[0x4]; // offset 0x137C
};
