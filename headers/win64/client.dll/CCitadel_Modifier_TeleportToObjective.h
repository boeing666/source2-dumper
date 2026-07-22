#pragma once

class CCitadel_Modifier_TeleportToObjective : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    Vector m_vDest; // offset 0xC0, size 0xC, align 4
    QAngle m_angDestAngles; // offset 0xCC, size 0xC, align 4
    Vector m_vDestVelocity; // offset 0xD8, size 0xC, align 4
    char _pad_00E4[0x4]; // offset 0xE4
};
