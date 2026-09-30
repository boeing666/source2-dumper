#pragma once

class CCitadel_Modifier_CP_Capturer : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CHandle< CCitadelTriggerCapturePoint > m_hCP; // offset 0x140, size 0x4, align 4
    CHandle< CBaseEntity > m_hEscort; // offset 0x144, size 0x4, align 4
};
