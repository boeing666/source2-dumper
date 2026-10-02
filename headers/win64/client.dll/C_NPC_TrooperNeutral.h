#pragma once

class C_NPC_TrooperNeutral : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1BA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    bool m_bShieldActive; // offset 0x1B60, size 0x1, align 1
    char _pad_1B61[0x3F]; // offset 0x1B61
};
