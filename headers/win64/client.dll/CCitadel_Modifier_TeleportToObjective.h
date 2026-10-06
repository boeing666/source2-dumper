#pragma once

class CCitadel_Modifier_TeleportToObjective : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    Vector m_vDest; // offset 0x138, size 0xC, align 4
    QAngle m_angDestAngles; // offset 0x144, size 0xC, align 4
    Vector m_vDestVelocity; // offset 0x150, size 0xC, align 4
    char _pad_015C[0x4]; // offset 0x15C
};
