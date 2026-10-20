#pragma once

class CCitadel_Ability_Teleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0x14D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bTeleportingToTarget; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x3]; // offset 0x14A9
    VectorWS m_vTargetPosition; // offset 0x14AC, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x14B8, size 0xC, align 4
    char _pad_14C4[0xC]; // offset 0x14C4
};
