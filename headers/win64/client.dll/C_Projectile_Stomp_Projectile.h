#pragma once

class C_Projectile_Stomp_Projectile : public C_CitadelProjectile /*0x0*/  // sizeof 0xD60, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xAD8]; // offset 0x0
    float32 m_flWidth; // offset 0xAD8, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_tDieTime; // offset 0xADC, size 0x4, align 255 | MNetworkEnable
    char _pad_0AE0[0x280]; // offset 0xAE0
};
