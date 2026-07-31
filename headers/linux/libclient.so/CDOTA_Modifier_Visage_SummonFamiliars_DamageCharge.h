#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 familiar_speed; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CountdownTimer m_ctTimer; // offset 0x1A80, size 0x18, align 8
};
