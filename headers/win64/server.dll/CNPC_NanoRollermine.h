#pragma once

class CNPC_NanoRollermine : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1840, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x17E8]; // offset 0x0
    float32 m_flForwardSpeed; // offset 0x17E8, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_17EC[0x44]; // offset 0x17EC
    CHandle< CBaseEntity > m_hOwnerPawn; // offset 0x1830, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_1834[0xC]; // offset 0x1834
};
