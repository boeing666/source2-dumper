#pragma once

class CDOTA_BaseNPC_Largo_Frogling : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1998, size 0x4, align 4
    int32 m_nFroglingIndex; // offset 0x199C, size 0x4, align 4
};
