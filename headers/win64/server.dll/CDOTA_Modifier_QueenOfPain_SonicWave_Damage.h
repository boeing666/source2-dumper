#pragma once

class CDOTA_Modifier_QueenOfPain_SonicWave_Damage : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flDamagePerTick; // offset 0x1AA8, size 0x4, align 4
    int32 m_nCurrentTick; // offset 0x1AAC, size 0x4, align 4
    int32 m_nTotalTicks; // offset 0x1AB0, size 0x4, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
