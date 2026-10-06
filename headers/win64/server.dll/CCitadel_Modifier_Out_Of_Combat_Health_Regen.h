#pragma once

class CCitadel_Modifier_Out_Of_Combat_Health_Regen : public CCitadelModifier /*0x0*/  // sizeof 0x2B0, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x2A8]; // offset 0x0
    GameTime_t m_LastDamageTaken; // offset 0x2A8, size 0x4, align 255
    char _pad_02AC[0x4]; // offset 0x2AC
};
