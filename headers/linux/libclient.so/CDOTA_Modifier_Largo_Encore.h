#pragma once

class CDOTA_Modifier_Largo_Encore : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 buff_amplification; // offset 0x1A58, size 0x4, align 4
    int32 repeat_buff; // offset 0x1A5C, size 0x4, align 4
    bool m_bRecursionCheck; // offset 0x1A60, size 0x1, align 1
    char _pad_1A61[0x7]; // offset 0x1A61
};
