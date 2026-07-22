#pragma once

class C_MolotovProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11E4]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0x11E4, size 0x1, align 1
    char _pad_11E5[0x23]; // offset 0x11E5
};
