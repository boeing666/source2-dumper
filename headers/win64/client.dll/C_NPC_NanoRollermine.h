#pragma once

class C_NPC_NanoRollermine : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C00, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BF8]; // offset 0x0
    float32 m_flForwardSpeed; // offset 0x1BF8, size 0x4, align 4 | MNetworkEnable MNotSaved
    CHandle< C_BaseEntity > m_hOwnerPawn; // offset 0x1BFC, size 0x4, align 4 | MNetworkEnable MNotSaved
};
