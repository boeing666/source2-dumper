#pragma once

class CCitadel_Modifier_CP_Capturer : public CCitadelModifier /*0x0*/, public ICitadelModifierCustomHudDisplay /*0xC0*/  // sizeof 0xD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC8]; // offset 0x0
    CHandle< CCitadelTriggerCapturePoint > m_hCP; // offset 0xC8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEscort; // offset 0xCC, size 0x4, align 4
};
