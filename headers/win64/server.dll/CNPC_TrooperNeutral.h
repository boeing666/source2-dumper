#pragma once

class CNPC_TrooperNeutral : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1830, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x180B]; // offset 0x0
    bool m_bShieldActive; // offset 0x180B, size 0x1, align 1 | MNetworkEnable
    bool m_bPlayingIdle; // offset 0x180C, size 0x1, align 1 | MNetworkEnable
    char _pad_180D[0x23]; // offset 0x180D
};
