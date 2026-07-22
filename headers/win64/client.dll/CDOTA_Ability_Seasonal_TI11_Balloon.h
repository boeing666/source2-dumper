#pragma once

class CDOTA_Ability_Seasonal_TI11_Balloon : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6D0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    float32 charge_use_interval; // offset 0x6A8, size 0x4, align 4
    float32 max_usable_charges; // offset 0x6AC, size 0x4, align 4
    GameTime_t m_flLastChargeUseTime; // offset 0x6B0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hBalloon; // offset 0x6B4, size 0x4, align 4
    char _pad_06B8[0x18]; // offset 0x6B8
};
