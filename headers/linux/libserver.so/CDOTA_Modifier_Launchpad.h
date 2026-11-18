#pragma once

class CDOTA_Modifier_Launchpad : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_iActualMovespeedBonus; // offset 0x1AF8, size 0x4, align 4
    int32 movespeed_bonus_fast; // offset 0x1AFC, size 0x4, align 4
    int32 movespeed_bonus_moderate; // offset 0x1B00, size 0x4, align 4
    int32 movespeed_bonus_slow; // offset 0x1B04, size 0x4, align 4
};
