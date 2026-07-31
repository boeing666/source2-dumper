#pragma once

class CDOTA_Modifier_Slark_SaltwaterShiv : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bShivAttack; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 duration; // offset 0x1A7C, size 0x4, align 4
};
