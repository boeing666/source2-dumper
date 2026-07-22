#pragma once

class CCitadelBulletTimeWarp : public C_BaseModelEntity /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    float32 m_flBulletTimeScale; // offset 0x9A8, size 0x4, align 4 | MNetworkEnable
    float32 m_flProjectileTimeScale; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flExpireTime; // offset 0x9B0, size 0x4, align 255 | MNetworkEnable
    float32 m_flStopDuration; // offset 0x9B4, size 0x4, align 4 | MNetworkEnable
    float32 m_flBulletTimeScaleFriendly; // offset 0x9B8, size 0x4, align 4 | MNetworkEnable
    float32 m_flBonusBulletBaseDamageFriendly; // offset 0x9BC, size 0x4, align 4 | MNetworkEnable
    char _pad_09C0[0x18]; // offset 0x9C0
};
