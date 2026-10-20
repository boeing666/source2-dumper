#pragma once

class CNPC_NurseLeech : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1A00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1710]; // offset 0x0
    CHandle< CBaseEntity > m_hNurse; // offset 0x1710, size 0x4, align 4
    char _pad_1714[0x2EC]; // offset 0x1714
};
