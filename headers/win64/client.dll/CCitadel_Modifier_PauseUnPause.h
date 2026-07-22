#pragma once

class CCitadel_Modifier_PauseUnPause : public CCitadelModifier /*0x0*/  // sizeof 0xD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    QAngle m_qPauseStartAngle; // offset 0xC0, size 0xC, align 4
    char _pad_00CC[0x4]; // offset 0xCC
};
