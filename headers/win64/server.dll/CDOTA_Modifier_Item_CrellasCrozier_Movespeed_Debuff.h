#pragma once

class CDOTA_Modifier_Item_CrellasCrozier_Movespeed_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 movespeed_steal_pct; // offset 0x1AA8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AAC, size 0x4, align 255
};
