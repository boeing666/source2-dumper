#pragma once

class CCitadel_Modifier_PauseUnPause : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    QAngle m_qPauseStartAngle; // offset 0x150, size 0xC, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
