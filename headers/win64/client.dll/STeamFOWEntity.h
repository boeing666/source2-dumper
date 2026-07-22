#pragma once

class STeamFOWEntity  // sizeof 0x60, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CEntityIndex m_nEntIndex; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    int32 m_nTeam; // offset 0x34, size 0x4, align 4 | MNetworkEnable
    Class_T m_eClass; // offset 0x38, size 0x4, align 4 | MNetworkEnable
    int32 m_iLane; // offset 0x3C, size 0x4, align 4 | MNetworkEnable
    EMinimapHeight m_eHeight; // offset 0x40, size 0x1, align 1 | MNetworkEnable
    bool m_bVisibleOnMap; // offset 0x41, size 0x1, align 1 | MNetworkEnable
    bool m_bBackdoorProtectionActive; // offset 0x42, size 0x1, align 1 | MNetworkEnable
    char _pad_0043[0x1]; // offset 0x43
    GameTick_t m_nTickHidden; // offset 0x44, size 0x4, align 255 | MNetworkEnable
    CUtlString m_strEntityName; // offset 0x48, size 0x8, align 8 | MNetworkEnable
    uint8 m_nHealthPercent; // offset 0x50, size 0x1, align 1 | MNetworkEnable
    uint8 m_nPositionX; // offset 0x51, size 0x1, align 1 | MNetworkEnable MNetworkPriority
    uint8 m_nPositionY; // offset 0x52, size 0x1, align 1 | MNetworkEnable MNetworkPriority
    char _pad_0053[0xD]; // offset 0x53
};
