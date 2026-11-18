#pragma once

class CDOTA_Unit_Underlord_Portal : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1E20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1E1C]; // offset 0x0
    CHandle< CBaseEntity > m_hOtherPortal; // offset 0x1E1C, size 0x4, align 4
};
