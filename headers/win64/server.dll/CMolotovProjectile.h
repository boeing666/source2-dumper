#pragma once

class CMolotovProjectile : public CBaseCSGrenadeProjectile /*0x0*/  // sizeof 0xC40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB40]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0x17]; // offset 0xB41
    bool m_bDetonated; // offset 0xB58, size 0x1, align 1
    char _pad_0B59[0x7]; // offset 0xB59
    IntervalTimer m_stillTimer; // offset 0xB60, size 0x10, align 8
    char _pad_0B70[0xD0]; // offset 0xB70
};
