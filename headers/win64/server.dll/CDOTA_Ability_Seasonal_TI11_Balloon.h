#pragma once

class CDOTA_Ability_Seasonal_TI11_Balloon : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 charge_use_interval; // offset 0x580, size 0x4, align 4
    float32 max_usable_charges; // offset 0x584, size 0x4, align 4
    GameTime_t m_flLastChargeUseTime; // offset 0x588, size 0x4, align 255
    CHandle< CBaseEntity > m_hBalloon; // offset 0x58C, size 0x4, align 4
    char _pad_0590[0x18]; // offset 0x590
};
