#pragma once

class CPlayerPawnComponent  // sizeof 0x48, align 0xFF [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CNetworkVarChainer __m_pChainEntity; // offset 0x8, size 0x28, align 255 | MNotSaved
    CAnimGraphControllerPtr m_pComponentGraphController; // offset 0x30, size 0x8, align 255
    char _pad_0038[0x10]; // offset 0x38
};
