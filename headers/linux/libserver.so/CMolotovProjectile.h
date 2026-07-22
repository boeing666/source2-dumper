#pragma once

class CMolotovProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xE30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xD35]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0xD35, size 0x1, align 1
    char _pad_0D36[0x16]; // offset 0xD36
    bool m_bDetonated; // offset 0xD4C, size 0x1, align 1
    char _pad_0D4D[0x3]; // offset 0xD4D
    IntervalTimer m_stillTimer; // offset 0xD50, size 0x10, align 8
    char _pad_0D60[0xD0]; // offset 0xD60
};
