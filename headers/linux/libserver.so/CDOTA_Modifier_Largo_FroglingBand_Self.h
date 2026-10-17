#pragma once

class CDOTA_Modifier_Largo_FroglingBand_Self : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 max_froglings; // offset 0x1AA8, size 0x4, align 4
    int32 m_nNumFroglings; // offset 0x1AAC, size 0x4, align 4
    CUtlVector< CHandle< CDOTA_BaseNPC_Largo_Frogling > > m_vecFroglings; // offset 0x1AB0, size 0x18, align 8
};
