#pragma once

class CDOTA_Modifier_Mars_Dauntless_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nDisadvantage; // offset 0x1A78, size 0x4, align 4
    int32 health_regen_per_enemy; // offset 0x1A7C, size 0x4, align 4
    float32 radius; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
};
