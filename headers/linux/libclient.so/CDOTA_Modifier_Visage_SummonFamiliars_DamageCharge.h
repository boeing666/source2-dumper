#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 familiar_speed; // offset 0x1A58, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x1A5C, size 0x4, align 4
    int32 m_nFXIndexB; // offset 0x1A60, size 0x4, align 4
    char _pad_1A64[0x4]; // offset 0x1A64
    CountdownTimer m_ctTimer; // offset 0x1A68, size 0x18, align 8
};
