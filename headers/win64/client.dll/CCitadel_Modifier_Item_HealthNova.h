#pragma once

class CCitadel_Modifier_Item_HealthNova : public CCitadelModifier /*0x0*/  // sizeof 0x1F0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    float32 m_flAmountPerSecond; // offset 0x130, size 0x4, align 4
    float32 m_flTotalPendingHeal; // offset 0x134, size 0x4, align 4
    float32 m_flTotalHeal; // offset 0x138, size 0x4, align 4
    char _pad_013C[0xB4]; // offset 0x13C
};
