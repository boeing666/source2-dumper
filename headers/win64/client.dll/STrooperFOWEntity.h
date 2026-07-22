#pragma once

class STrooperFOWEntity  // sizeof 0x40, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x30]; // offset 0x0
    CEntityIndex m_nEntIndex; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    int8 m_nTeam; // offset 0x34, size 0x1, align 1 | MNetworkEnable
    char _pad_0035[0x1]; // offset 0x35
    uint16 m_nPositionXY; // offset 0x36, size 0x2, align 2 | MNetworkEnable MNetworkPriority MNetworkChangeCallback
    char _pad_0038[0x8]; // offset 0x38
};
