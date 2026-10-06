#pragma once

class CCitadel_Modifier_Item_HealthNova : public CCitadelModifier /*0x0*/  // sizeof 0x208, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    float32 m_flAmountPerSecond; // offset 0x148, size 0x4, align 4
    float32 m_flTotalPendingHeal; // offset 0x14C, size 0x4, align 4
    float32 m_flTotalHeal; // offset 0x150, size 0x4, align 4
    char _pad_0154[0xB4]; // offset 0x154
};
