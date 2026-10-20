#pragma once

class CCitadel_Modifier_Item_HealthNova : public CCitadelModifier /*0x0*/  // sizeof 0x210, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    float32 m_flAmountPerSecond; // offset 0x150, size 0x4, align 4
    float32 m_flTotalPendingHeal; // offset 0x154, size 0x4, align 4
    float32 m_flTotalHeal; // offset 0x158, size 0x4, align 4
    char _pad_015C[0xB4]; // offset 0x15C
};
