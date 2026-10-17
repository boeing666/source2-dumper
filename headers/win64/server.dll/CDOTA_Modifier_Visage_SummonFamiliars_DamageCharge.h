#pragma once

class CDOTA_Modifier_Visage_SummonFamiliars_DamageCharge : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 familiar_speed; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CountdownTimer m_ctTimer; // offset 0x1AB0, size 0x18, align 8
};
