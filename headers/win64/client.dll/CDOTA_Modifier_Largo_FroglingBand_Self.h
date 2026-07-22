#pragma once

class CDOTA_Modifier_Largo_FroglingBand_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 max_froglings; // offset 0x1A58, size 0x4, align 4
    int32 m_nNumFroglings; // offset 0x1A5C, size 0x4, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC_Largo_Frogling > > m_vecFroglings; // offset 0x1A60, size 0x18, align 8
};
