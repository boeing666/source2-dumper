#pragma once

class C_Citadel_Shield : public CCitadelModelEntity /*0x0*/  // sizeof 0x9B8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9B0]; // offset 0x0
    bool m_bAllowRotatingUp; // offset 0x9B0, size 0x1, align 1 | MNetworkEnable
    bool m_bFixedPosition; // offset 0x9B1, size 0x1, align 1 | MNetworkEnable
    char _pad_09B2[0x2]; // offset 0x9B2
    float32 m_flShieldOffset; // offset 0x9B4, size 0x4, align 4 | MNetworkEnable
};
