#pragma once

class C_MolotovProjectile : public C_BaseCSGrenadeProjectile /*0x0*/  // sizeof 0x1370, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1348]; // offset 0x0
    bool m_bIsIncGrenade; // offset 0x1348, size 0x1, align 1
    char _pad_1349[0x27]; // offset 0x1349
};
