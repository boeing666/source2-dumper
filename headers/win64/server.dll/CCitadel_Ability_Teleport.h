#pragma once

class CCitadel_Ability_Teleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0xF98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bTeleportingToTarget; // offset 0xF70, size 0x1, align 1
    char _pad_0F71[0x3]; // offset 0xF71
    Vector m_vTargetPosition; // offset 0xF74, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0xF80, size 0xC, align 4
    char _pad_0F8C[0xC]; // offset 0xF8C
};
