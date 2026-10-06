#pragma once

class CCitadel_Modifier_TeleportToObjective : public CCitadelModifier /*0x0*/  // sizeof 0x170, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    Vector m_vDest; // offset 0x148, size 0xC, align 4
    QAngle m_angDestAngles; // offset 0x154, size 0xC, align 4
    Vector m_vDestVelocity; // offset 0x160, size 0xC, align 4
    char _pad_016C[0x4]; // offset 0x16C
};
