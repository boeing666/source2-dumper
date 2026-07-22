#pragma once

class CMolotovProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xB60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA60]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0xA60, size 0x1, align 1
    char _pad_0A61[0x17]; // offset 0xA61
    bool m_bDetonated; // offset 0xA78, size 0x1, align 1
    char _pad_0A79[0x7]; // offset 0xA79
    IntervalTimer m_stillTimer; // offset 0xA80, size 0x10, align 8
    char _pad_0A90[0xD0]; // offset 0xA90
};
