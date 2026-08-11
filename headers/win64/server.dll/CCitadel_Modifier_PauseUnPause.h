#pragma once

class CCitadel_Modifier_PauseUnPause : public CCitadelModifier /*0x0*/  // sizeof 0xE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    QAngle m_qPauseStartAngle; // offset 0xD0, size 0xC, align 4
    char _pad_00DC[0x4]; // offset 0xDC
};
