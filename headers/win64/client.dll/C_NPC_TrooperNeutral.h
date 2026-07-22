#pragma once

class C_NPC_TrooperNeutral : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1C10, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1BD0]; // offset 0x0
    bool m_bPlayingIdle; // offset 0x1BD0, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bShieldActive; // offset 0x1BD1, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_1BD2[0x3E]; // offset 0x1BD2
};
