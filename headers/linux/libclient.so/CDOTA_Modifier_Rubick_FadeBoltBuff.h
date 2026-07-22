#pragma once

class CDOTA_Modifier_Rubick_FadeBoltBuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A70]; // offset 0x0
    float32 m_flTotalDamage; // offset 0x1A70, size 0x4, align 4
    float32 duration; // offset 0x1A74, size 0x4, align 4
};
