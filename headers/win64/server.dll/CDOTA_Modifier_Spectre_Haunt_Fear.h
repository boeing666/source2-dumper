#pragma once

class CDOTA_Modifier_Spectre_Haunt_Fear : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 fear_movespeed_slow; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vOriginal; // offset 0x1A7C, size 0xC, align 4
};
