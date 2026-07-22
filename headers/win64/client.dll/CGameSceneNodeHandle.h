#pragma once

class CGameSceneNodeHandle  // sizeof 0x10, align 0xFF [vtable trivial_dtor] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CEntityHandle m_hOwner; // offset 0x8, size 0x4, align 4 | MNetworkEnable
    CUtlStringToken m_name; // offset 0xC, size 0x4, align 4 | MNetworkEnable
};
