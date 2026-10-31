#pragma once

class CCitadel_Ability_Mirage_Teleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0x17B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14C0]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x14C0, size 0x4, align 4
    GameTime_t m_tTeleportCompletedTime; // offset 0x14C4, size 0x4, align 255
    GameTime_t m_tLastLandedTime; // offset 0x14C8, size 0x4, align 255
    VectorWS m_vTargetPosition; // offset 0x14CC, size 0xC, align 4
    QAngle m_vTargetAngles; // offset 0x14D8, size 0xC, align 4
    char _pad_14E4[0x2CC]; // offset 0x14E4
};
