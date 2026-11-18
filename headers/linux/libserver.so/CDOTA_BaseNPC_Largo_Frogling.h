#pragma once

class CDOTA_BaseNPC_Largo_Frogling : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    CHandle< CDOTA_BaseNPC_Hero > m_hHeroHandle; // offset 0x1D0C, size 0x4, align 4
    int32 m_nFroglingIndex; // offset 0x1D10, size 0x4, align 4
    char _pad_1D14[0x4]; // offset 0x1D14
};
