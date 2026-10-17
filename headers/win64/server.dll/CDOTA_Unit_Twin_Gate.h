#pragma once

class CDOTA_Unit_Twin_Gate : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1AB8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AB0]; // offset 0x0
    CHandle< CBaseEntity > m_hOtherPortal; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
