#pragma once

class CCitadel_Modifier_UltCombo_Target : public CCitadel_Modifier_Stunned /*0x0*/  // sizeof 0xF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    QAngle m_angles; // offset 0xD8, size 0xC, align 4
    char _pad_00E4[0x4]; // offset 0xE4
    CCitadelModifier* m_pAttachmentModifier; // offset 0xE8, size 0x8, align 8
};
