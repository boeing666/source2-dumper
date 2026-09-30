#pragma once

class CCitadelBulletTimeWarp : public C_BaseModelEntity /*0x0*/  // sizeof 0xBE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    float32 m_flBulletTimeScale; // offset 0xBB0, size 0x4, align 4
    float32 m_flProjectileTimeScale; // offset 0xBB4, size 0x4, align 4
    GameTime_t m_flExpireTime; // offset 0xBB8, size 0x4, align 255
    float32 m_flStopDuration; // offset 0xBBC, size 0x4, align 4
    float32 m_flBulletTimeScaleFriendly; // offset 0xBC0, size 0x4, align 4
    float32 m_flBonusBulletBaseDamageFriendly; // offset 0xBC4, size 0x4, align 4
    char _pad_0BC8[0x18]; // offset 0xBC8
};
