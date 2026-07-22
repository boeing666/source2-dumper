#pragma once

class CCitadel_Ability_Teleport : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1200, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bTeleportingToTarget; // offset 0x11D8, size 0x1, align 1
    char _pad_11D9[0x3]; // offset 0x11D9
    Vector m_vTargetPosition; // offset 0x11DC, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x11E8, size 0xC, align 4
    char _pad_11F4[0xC]; // offset 0x11F4
};
