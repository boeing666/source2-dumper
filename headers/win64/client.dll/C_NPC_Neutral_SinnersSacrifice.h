#pragma once

class C_NPC_Neutral_SinnersSacrifice : public C_NPC_TrooperNeutral /*0x0*/  // sizeof 0x1C38, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x1C10]; // offset 0x0
    int32 m_iVaultState; // offset 0x1C10, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_1C14[0x24]; // offset 0x1C14
};
