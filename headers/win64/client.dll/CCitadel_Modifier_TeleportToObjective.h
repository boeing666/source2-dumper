#pragma once

class CCitadel_Modifier_TeleportToObjective : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    Vector m_vDest; // offset 0x130, size 0xC, align 4
    QAngle m_angDestAngles; // offset 0x13C, size 0xC, align 4
    Vector m_vDestVelocity; // offset 0x148, size 0xC, align 4
    char _pad_0154[0x4]; // offset 0x154
};
