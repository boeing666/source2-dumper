#pragma once

class CCitadel_Modifier_Out_Of_Combat_Health_Regen : public CCitadelModifier /*0x0*/  // sizeof 0x1D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    GameTime_t m_LastDamageTaken; // offset 0x1D0, size 0x4, align 255
    char _pad_01D4[0x4]; // offset 0x1D4
};
