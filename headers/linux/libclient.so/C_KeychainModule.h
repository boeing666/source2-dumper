#pragma once

class C_KeychainModule : public C_CS2WeaponModuleBase /*0x0*/  // sizeof 0x1200, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F8]; // offset 0x0
    uint32 m_nKeychainDefID; // offset 0x11F8, size 0x4, align 4
    uint32 m_nKeychainSeed; // offset 0x11FC, size 0x4, align 4
};
