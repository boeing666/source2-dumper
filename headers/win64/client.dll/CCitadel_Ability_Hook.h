#pragma once

class CCitadel_Ability_Hook : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1DE8, align 0x8 [vtable] (client) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CHandle< C_BaseEntity > m_hHookVictim; // offset 0x16E0, size 0x4, align 4
    VectorWS m_vecHookTargetStartPos; // offset 0x16E4, size 0xC, align 4
    GameTime_t m_flCancelHookTime; // offset 0x16F0, size 0x4, align 255
    GameTime_t m_flBeginReelHookTime; // offset 0x16F4, size 0x4, align 255
    GameTime_t m_flBulletShouldExpireTime; // offset 0x16F8, size 0x4, align 255
    char _pad_16FC[0x8]; // offset 0x16FC
    float32 m_flMaxHookTravelTime; // offset 0x1704, size 0x4, align 4
    char _pad_1708[0x6E0]; // offset 0x1708
};
