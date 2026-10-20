#pragma once

class CNPC_NurseLeech : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1E48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    CHandle< C_BaseEntity > m_hNurse; // offset 0x1B60, size 0x4, align 4
    char _pad_1B64[0x2E4]; // offset 0x1B64
};
