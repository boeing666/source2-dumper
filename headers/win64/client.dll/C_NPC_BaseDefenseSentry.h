#pragma once

class C_NPC_BaseDefenseSentry : public C_NPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName MNetworkVarNames}
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    Vector m_vecUnitStatusOffset; // offset 0xCB8, size 0xC, align 4 | MNetworkEnable MNotSaved
    char _pad_0CC4[0x4]; // offset 0xCC4
};
