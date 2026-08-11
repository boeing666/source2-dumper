#pragma once

class CDOTACourierController  // sizeof 0xC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    bool m_bAutoCourierAutoBurst; // offset 0x8, size 0x1, align 1
    bool m_bAutoCourierAutoDeliver; // offset 0x9, size 0x1, align 1
    bool m_bDeliverWhileVisibleOnly; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x1]; // offset 0xB
    CHandle< CDOTA_Unit_Courier > m_hCourier; // offset 0xC, size 0x4, align 4
    PlayerID_t m_nPlayerID; // offset 0x10, size 0x4, align 255
    bool m_bUseNewLogic; // offset 0x14, size 0x1, align 1
    char _pad_0015[0x3]; // offset 0x15
    DOTA_SHOP_TYPE m_eFSMShop; // offset 0x18, size 0x4, align 4
    CHandle< CBaseEntity > m_hFSMUnit; // offset 0x1C, size 0x4, align 4
    ECourierState m_eFSMState; // offset 0x20, size 0x4, align 4
    bool m_bFSMStashAfter; // offset 0x24, size 0x1, align 1
    bool m_bManualRequest; // offset 0x25, size 0x1, align 1
    bool m_bIgnoreNextPlayerInteraction; // offset 0x26, size 0x1, align 1
    bool m_bWasAlive; // offset 0x27, size 0x1, align 1
    bool m_bTargetWasAlive; // offset 0x28, size 0x1, align 1
    char _pad_0029[0x7]; // offset 0x29
    CountdownTimer m_TransitionTimer; // offset 0x30, size 0x18, align 8
    CountdownTimer m_ManualTimer; // offset 0x48, size 0x18, align 8
    float32 m_flCourier_wait_time_item_purchase; // offset 0x60, size 0x4, align 4
    float32 m_flCourier_wait_time_item_mark; // offset 0x64, size 0x4, align 4
    float32 m_flCourier_wait_time_manualorder; // offset 0x68, size 0x4, align 4
    float32 m_flCourier_wait_time_manualorder_stop; // offset 0x6C, size 0x4, align 4
    float32 m_flCourier_nondivert_range; // offset 0x70, size 0x4, align 4
    float32 m_flCourier_min_dot_for_divert; // offset 0x74, size 0x4, align 4
    float32 m_flCourier_max_divert_length; // offset 0x78, size 0x4, align 4
    float32 m_flCourier_max_divert_mult; // offset 0x7C, size 0x4, align 4
    float32 m_flCourier_divert_near_shop_dist; // offset 0x80, size 0x4, align 4
    char _pad_0084[0x4]; // offset 0x84
    CUtlVector< bool > m_vecAutoState; // offset 0x88, size 0x18, align 8
    int32 m_nLastSecondCaptured; // offset 0xA0, size 0x4, align 4
    int32 m_nMoveCount; // offset 0xA4, size 0x4, align 4
    VectorWS m_vLastPos; // offset 0xA8, size 0xC, align 4
    bool m_bDebugging; // offset 0xB4, size 0x1, align 1
    bool m_bTriggerDebug; // offset 0xB5, size 0x1, align 1
    char _pad_00B6[0x2]; // offset 0xB6
    DebugOverlayBits_t m_eDebugBits; // offset 0xB8, size 0x8, align 8
};
