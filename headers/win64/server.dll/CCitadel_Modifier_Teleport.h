#pragma once

class CCitadel_Modifier_Teleport : public CCitadelModifier /*0x0*/  // sizeof 0xF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    VectorWS m_vDest; // offset 0xD0, size 0xC, align 4
    QAngle m_angDestAngles; // offset 0xDC, size 0xC, align 4
    Vector m_vDestVelocity; // offset 0xE8, size 0xC, align 4
    char _pad_00F4[0x4]; // offset 0xF4
};
