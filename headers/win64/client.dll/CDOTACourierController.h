#pragma once

class CDOTACourierController  // sizeof 0x28, align 0xFF [vtable trivial_dtor] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bAutoCourierAutoBurst; // offset 0x8, size 0x1, align 1
    bool m_bAutoCourierAutoDeliver; // offset 0x9, size 0x1, align 1
    bool m_bDeliverWhileVisibleOnly; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x1]; // offset 0xB
    CHandle< C_DOTA_Unit_Courier > m_hCourier; // offset 0xC, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0x10, size 0x4, align 255
    bool m_bUseNewLogic; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    DOTA_SHOP_TYPE m_eFSMShop; // offset 0x18, size 0x4, align 4
    CHandle< C_BaseEntity > m_hFSMUnit; // offset 0x1C, size 0x4, align 4
    ECourierState m_eFSMState; // offset 0x20, size 0x4, align 4
    bool m_bFSMStashAfter; // offset 0x24, size 0x1, align 1
    bool m_bManualRequest; // offset 0x25, size 0x1, align 1
    char _pad_0026[0x2]; // offset 0x26
};
