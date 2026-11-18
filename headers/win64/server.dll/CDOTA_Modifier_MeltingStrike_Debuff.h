#pragma once

class CDOTA_Modifier_MeltingStrike_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 armor_removed; // offset 0x1AF8, size 0x4, align 4
    int32 m_nMaxStacks; // offset 0x1AFC, size 0x4, align 4
};
