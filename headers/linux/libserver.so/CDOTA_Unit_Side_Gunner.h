#pragma once

class CDOTA_Unit_Side_Gunner : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C80, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1C78]; // offset 0x0
    CHandle< CBaseEntity > m_hOwningNPC; // offset 0x1C78, size 0x4, align 4
    char _pad_1C7C[0x4]; // offset 0x1C7C
};
