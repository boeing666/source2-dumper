#pragma once

class CDOTA_Unit_Twin_Gate : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1C98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C94]; // offset 0x0
    CHandle< CBaseEntity > m_hOtherPortal; // offset 0x1C94, size 0x4, align 4
};
