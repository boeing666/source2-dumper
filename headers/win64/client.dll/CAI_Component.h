#pragma once

class CAI_Component  // sizeof 0x50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    char _pad_0030[0x20]; // offset 0x30
};
