#pragma once

class CCitadelBulletTimeWarp : public CBaseModelEntity /*0x0*/  // sizeof 0xAA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    float32 m_flBulletTimeScale; // offset 0x878, size 0x4, align 4
    float32 m_flProjectileTimeScale; // offset 0x87C, size 0x4, align 4
    GameTime_t m_flExpireTime; // offset 0x880, size 0x4, align 255
    float32 m_flStopDuration; // offset 0x884, size 0x4, align 4
    float32 m_flBulletTimeScaleFriendly; // offset 0x888, size 0x4, align 4
    float32 m_flBonusBulletBaseDamageFriendly; // offset 0x88C, size 0x4, align 4
    char _pad_0890[0x210]; // offset 0x890
};
