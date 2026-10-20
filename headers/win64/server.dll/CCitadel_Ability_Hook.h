#pragma once

class CCitadel_Ability_Hook : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1BB8, align 0x8 [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CHandle< CBaseEntity > m_hHookVictim; // offset 0x14A8, size 0x4, align 4
    VectorWS m_vecHookTargetStartPos; // offset 0x14AC, size 0xC, align 4
    GameTime_t m_flCancelHookTime; // offset 0x14B8, size 0x4, align 255
    GameTime_t m_flBeginReelHookTime; // offset 0x14BC, size 0x4, align 255
    GameTime_t m_flBulletShouldExpireTime; // offset 0x14C0, size 0x4, align 255
    char _pad_14C4[0x8]; // offset 0x14C4
    float32 m_flMaxHookTravelTime; // offset 0x14CC, size 0x4, align 4
    float32 m_flLastUppercutRestoreTime; // offset 0x14D0, size 0x4, align 4
    char _pad_14D4[0x6E4]; // offset 0x14D4
};
