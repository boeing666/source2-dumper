#pragma once

class CCitadelBulletTimeWarp : public CBaseModelEntity /*0x0*/  // sizeof 0x9A8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    float32 m_flBulletTimeScale; // offset 0x780, size 0x4, align 4 | MNetworkEnable
    float32 m_flProjectileTimeScale; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flExpireTime; // offset 0x788, size 0x4, align 255 | MNetworkEnable
    float32 m_flStopDuration; // offset 0x78C, size 0x4, align 4 | MNetworkEnable
    float32 m_flBulletTimeScaleFriendly; // offset 0x790, size 0x4, align 4 | MNetworkEnable
    float32 m_flBonusBulletBaseDamageFriendly; // offset 0x794, size 0x4, align 4 | MNetworkEnable
    char _pad_0798[0x210]; // offset 0x798
};
