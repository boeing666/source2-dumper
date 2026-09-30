#pragma once

class CCitadel_Modifier_CP_Capturer : public CCitadelModifier /*0x0*/, public ICitadelModifierCustomHudDisplay /*0x130*/  // sizeof 0x140, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CHandle< CCitadelTriggerCapturePoint > m_hCP; // offset 0x138, size 0x4, align 4
    CHandle< C_BaseEntity > m_hEscort; // offset 0x13C, size 0x4, align 4
};
