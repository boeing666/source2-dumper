#pragma once

class CCitadel_Shield : public CCitadelModelEntity /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server) {MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    bool m_bAllowRotatingUp; // offset 0x8E0, size 0x1, align 1 | MNetworkEnable
    bool m_bFixedPosition; // offset 0x8E1, size 0x1, align 1 | MNetworkEnable
    char _pad_08E2[0x2]; // offset 0x8E2
    float32 m_flShieldOffset; // offset 0x8E4, size 0x4, align 4 | MNetworkEnable
};
