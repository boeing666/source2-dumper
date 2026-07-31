#pragma once

class CDOTA_Modifier_Bane_Ichor_Of_Nyctasha_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bActive; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    float32 status_resistance; // offset 0x1A7C, size 0x4, align 4
};
