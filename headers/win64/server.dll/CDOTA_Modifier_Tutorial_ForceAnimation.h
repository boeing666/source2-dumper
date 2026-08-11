#pragma once

class CDOTA_Modifier_Tutorial_ForceAnimation : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nActivity; // offset 0x1A78, size 0x4, align 4
    bool m_bLoop; // offset 0x1A7C, size 0x1, align 1
    bool m_bFacePlayer; // offset 0x1A7D, size 0x1, align 1
    char _pad_1A7E[0x2]; // offset 0x1A7E
};
