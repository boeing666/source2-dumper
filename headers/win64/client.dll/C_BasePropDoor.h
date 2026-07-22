#pragma once

class C_BasePropDoor : public C_DynamicProp /*0x0*/  // sizeof 0xF30, align 0x10 [vtable] (client) {MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkExcludeByName MNetworkExcludeByUserGroup MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF00]; // offset 0x0
    DoorState_t m_eDoorState; // offset 0xF00, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_modelChanged; // offset 0xF04, size 0x1, align 1 | MNotSaved
    bool m_bLocked; // offset 0xF05, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bNoNPCs; // offset 0xF06, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0F07[0x1]; // offset 0xF07
    Vector m_closedPosition; // offset 0xF08, size 0xC, align 4 | MNetworkEnable MNotSaved
    QAngle m_closedAngles; // offset 0xF14, size 0xC, align 4 | MNetworkEnable MNotSaved
    CHandle< C_BasePropDoor > m_hMaster; // offset 0xF20, size 0x4, align 4 | MNetworkEnable MNotSaved
    Vector m_vWhereToSetLightingOrigin; // offset 0xF24, size 0xC, align 4 | MNotSaved
};
