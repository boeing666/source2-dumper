#pragma once

class CCitadel_Modifier_CP_Capturer : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CCitadelTriggerCapturePoint > m_hCP; // offset 0xD0, size 0x4, align 4
    CHandle< CBaseEntity > m_hEscort; // offset 0xD4, size 0x4, align 4
};
