#pragma once

class CCitadelItemPickupIdol : public CCitadelItemPickup /*0x0*/  // sizeof 0x5530, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x5520]; // offset 0x0
    int32 m_nTeamBias; // offset 0x5520, size 0x4, align 4 | MNetworkEnable
    bool m_bPlaySpawnMusic; // offset 0x5524, size 0x1, align 1 | MNetworkEnable
    char _pad_5525[0xB]; // offset 0x5525
};
