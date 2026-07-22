#pragma once

class CNPC_Neutral_SinnersSacrifice : public CNPC_TrooperNeutral /*0x0*/  // sizeof 0x1B50, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1830]; // offset 0x0
    int32 m_iVaultState; // offset 0x1830, size 0x4, align 4 | MNetworkEnable
    char _pad_1834[0x31C]; // offset 0x1834
};
