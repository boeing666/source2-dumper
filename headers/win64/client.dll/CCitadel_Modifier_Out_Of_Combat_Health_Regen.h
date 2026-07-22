#pragma once

class CCitadel_Modifier_Out_Of_Combat_Health_Regen : public CCitadelModifier /*0x0*/  // sizeof 0x1C8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1C0]; // offset 0x0
    GameTime_t m_LastDamageTaken; // offset 0x1C0, size 0x4, align 255
    char _pad_01C4[0x4]; // offset 0x1C4
};
