#pragma once

class CAI_MoveProbe : public CAI_Component /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CHandle< CBaseEntity > m_hLastBlockingEnt; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
