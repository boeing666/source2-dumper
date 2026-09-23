#pragma once

class CMolotovProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xF10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xE15]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0xE15, size 0x1, align 1
    char _pad_0E16[0x16]; // offset 0xE16
    bool m_bDetonated; // offset 0xE2C, size 0x1, align 1
    char _pad_0E2D[0x3]; // offset 0xE2D
    IntervalTimer m_stillTimer; // offset 0xE30, size 0x10, align 8
    char _pad_0E40[0xD0]; // offset 0xE40
};
