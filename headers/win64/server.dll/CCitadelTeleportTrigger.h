#pragma once

class CCitadelTeleportTrigger : public CTriggerModifier /*0x0*/  // sizeof 0x990, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x8F0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    Vector m_vExitOrigin; // offset 0x910, size 0xC, align 4 | MNetworkEnable
    char _pad_091C[0x44]; // offset 0x91C
    CUtlSymbolLarge m_strExitPoint; // offset 0x960, size 0x8, align 8
    CEntityIOOutput m_OnTeleport; // offset 0x968, size 0x18, align 255
    CUtlSymbolLarge m_strPropModel; // offset 0x980, size 0x8, align 8
    float32 m_flTeleportDelay; // offset 0x988, size 0x4, align 4
    char _pad_098C[0x4]; // offset 0x98C
};
