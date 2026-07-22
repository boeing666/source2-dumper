#pragma once

class CCitadelItemPickupIdol : public C_CitadelItemPickup /*0x0*/  // sizeof 0xD00, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCF8]; // offset 0x0
    int32 m_nTeamBias; // offset 0xCF8, size 0x4, align 4 | MNetworkEnable
    bool m_bPlaySpawnMusic; // offset 0xCFC, size 0x1, align 1 | MNetworkEnable
    char _pad_0CFD[0x3]; // offset 0xCFD
};
