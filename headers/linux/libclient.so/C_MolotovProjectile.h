#pragma once

class C_MolotovProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x12F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x12CC]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0x12CC, size 0x1, align 1
    char _pad_12CD[0x23]; // offset 0x12CD
};
