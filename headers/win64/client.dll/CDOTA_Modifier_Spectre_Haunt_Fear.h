#pragma once

class CDOTA_Modifier_Spectre_Haunt_Fear : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 fear_movespeed_slow; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vOriginal; // offset 0x1A5C, size 0xC, align 4
};
