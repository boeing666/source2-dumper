#pragma once

class CCitadel_Modifier_VitalitySuppressor : public CCitadelModifier /*0x0*/  // sizeof 0x2B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    GameTime_t m_flLastTickTime; // offset 0x148, size 0x4, align 255
    char _pad_014C[0x164]; // offset 0x14C
};
