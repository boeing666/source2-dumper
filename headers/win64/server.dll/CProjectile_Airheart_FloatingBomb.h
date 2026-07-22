#pragma once

class CProjectile_Airheart_FloatingBomb : public CCitadelProjectile /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    Vector vVelocity; // offset 0x860, size 0xC, align 4
    GameTime_t m_tSpawnTime; // offset 0x86C, size 0x4, align 255
    char _pad_0870[0x280]; // offset 0x870
};
